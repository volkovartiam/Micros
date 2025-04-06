/*
 * Distance.c
 *
 * Created: 04.07.2016 11:07:51
 * Author : bent_even_fossum.fla
 */

#include <avr/io.h>
#include "ssd1306.h"
#include "median.h"
#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <stdio.h>
#include <string.h>

#define OUTPUT_SSD1306 0
#define OUTPUT_UART 1

#define OUTPUT_USED OUTPUT_SSD1306

#define SYSTEM_CLOCK 20e6
#define SYSTEM_PRESCALER 16
#define TIMER_PRESCALER 32
#define TIMER_CLOCK (SYSTEM_CLOCK / SYSTEM_PRESCALER / TIMER_PRESCALER)

#define MEDIAN_FILTER_SIZE 3

#define BUTTON_PORT PORTB
#define BUTTON_PIN 0
#define BUTTON_PIN_MASK (1 << BUTTON_PIN)
#define BUTTON_PINCTRL PIN0CTRL
#define BUTTON_VECT PORTB_PORT_vect

uint16_t        values_bfr[MEDIAN_FILTER_SIZE];
uint16_t        sort_bfr[MEDIAN_FILTER_SIZE];
median_filter_t filter1;

typedef enum __interrupt_flags {
	INTERRUPT_FLAG_CAPTURE = 0,
	INTERRUPT_FLAG_TEMP,
	INTERRUPT_FLAG_BUTTON,

} interrupt_flag_t;

volatile uint8_t          selected_mode        = 0;
volatile interrupt_flag_t task_interrupt_flags = 1 << INTERRUPT_FLAG_BUTTON;
volatile uint16_t         temperature_reading  = 0;

uint16_t current_sound_volocity = 0;

/* Time of flight to distance measurement is given by t = d*2/v
 * Table below is v/2 in cm/s.
 */
const __flash uint16_t sound_speed_table_conv[] = {
    15779, // 315.77 m/s @ -25C
    15947, // 318.94 m/s @ -20C
    16104, // 322.07 m/s @ -15C
    16259, // 325.18 m/s @ -10C
    16413, // 328.25 m/s @ -5C
    16565, // 331.30 m/s @ 0C
    16716, // 334.32 m/s @ 5C
    16865, // 337.31 m/s @ 10C
    17014, // 340.27 m/s @ 15C
    17161, // 343.21 m/s @ 20C
    17307, // 346.13 m/s @ 25C
    17451, // 349.02 m/s @ 30C
    17594, // 351.88 m/s @ 35C
};

/* Thresholds for the different temperatures */
const __flash uint16_t temperature_thresholds[] = {
    1024,
    638,
    630,
    619,
    606,
    590,
    570,
    547,
    520,
    491,
    458,
    423,
    388,
    351,
    0,
};

/* Magic numbers */
const __flash uint16_t mode_table[4][3] = {
    {115, 0x5b, 0x3},   // 40-100cm
    {130, 0x9C, 0x8},   // 70-250cm
    {140, 0xe5, 0x10},  // 100-600cm
    {150, 0x23E, 0x20}, // 250-1000cm
};

const char const *mode_text[] = {"40-100cm (beta)", "70-250cm", "100-600cm", "250-1000cm"};

ISR(TCD0_TRIG_vect)
{
	task_interrupt_flags |= 1 << INTERRUPT_FLAG_CAPTURE;

	TCD0.INTFLAGS = TCD_TRIGA_bm;
}

ISR(BUTTON_VECT)
{
	task_interrupt_flags |= 1 << INTERRUPT_FLAG_BUTTON;

	/* Temp turn off interrupt on pin */
	BUTTON_PORT.BUTTON_PINCTRL = PORT_ISC_INTDISABLE_gc | PORT_PULLUPEN_bm;

	BUTTON_PORT.INTFLAGS = BUTTON_PIN_MASK;
}

ISR(ADC0_WCOMP_vect)
{
	task_interrupt_flags |= 1 << INTERRUPT_FLAG_TEMP;
	temperature_reading = ADC0.RES;
	/* Clear flag */
	ADC0.INTFLAGS = ADC_WCMP_bm;
}

#if OUTPUT_USED == OUTPUT_SSD1306
static void oled_clear(uint16_t columns)
{
	for (uint16_t column_address = 0; column_address < columns; column_address++) {
		if (column_address % 128 == 0) {
			ssd1306_set_page_address(column_address / 128);
			ssd1306_set_column_address(0);
		}
		/* Clear screen */
		ssd1306_write_data(0x00);
	}
}

static void oled_init(void)
{
	ssd1306_init();
	ssd1306_set_display_start_line_address(0);

	oled_clear(8 * 128);
	ssd1306_set_page_address(0);
}

static void oled_write(char *tmp_string)
{
	static uint8_t last_string_length = 0;

	oled_clear(last_string_length * 6);
	ssd1306_set_column_address(0);
	ssd1306_write_text(tmp_string);
	last_string_length = strlen(tmp_string);
}
#endif

static void send_tc_data(uint16_t data)
{
	static uint16_t last = 0;
	static int8_t   keep = 0;
	char            tmp_string[10];
	/* d = t*v/2. t = timer_tick/f_timer
	 * f_timer = f_system_clock/system_prescaler/timer_prescaler
	 * f_timer = 20MHz/16/32 = 39062
	 * d = timer_tick*sound_speed_table_conv[?]/39062
	 */
	volatile uint32_t tmp = (uint32_t)data * current_sound_volocity;
	tmp /= TIMER_CLOCK;

	if (data > mode_table[selected_mode][1]) {
		tmp = median_filter_add_new_value(&filter1, (uint16_t)tmp);
		if (tmp > 0 && tmp != last) {

			snprintf(tmp_string, 10, "%dcm", (int)tmp);
			oled_write(tmp_string);
			keep = 10;
			last = tmp;
		} else if (tmp == last) {
			keep = 10;
		}
	} else if (keep > 0) {
		keep--;
	} else if (!keep) {
		oled_write("searching...");
		keep--;
	}
}

#if OUTPUT_USED == OUTPUT_UART
static void init_uart(void)
{
	/* Enable output pin */
	PORTB.DIRSET = 1 << 2;

	/* Enable UART */
	USART0.CTRLB = USART_TXEN_bm | USART_RXEN_bm;
	/* No parity, 8 bit, 1 stop bit */
	USART0.CTRLC = USART_CHSIZE_8BIT_gc;
	/* Baud = (64 * fref) / (16 * fbaud) BAUD 87 -> 57600 */
	USART0.BAUD = 87;
}
#endif

static void seq_init(void)
{
	CCL.SEQCTRL0 = CCL_SEQSEL_RS_gc;
}

static void lut0_init(void)
{
	/* High when AC and TCD is low */
	CCL.TRUTH0    = 0x01;
	CCL.LUT0CTRLB = CCL_INSEL1_AC0_gc | CCL_INSEL0_TCD0_gc;
	CCL.LUT0CTRLA = CCL_ENABLE_bm | CCL_FILTSEL_FILTER_gc;
}

static void lut1_init(void)
{
	PORTC.DIRSET = 1 << 1;

	PORTMUX.CTRLA = PORTMUX_LUT1_bm;

	/* High when TCB is high and TCD is low */
	CCL.TRUTH1    = 0x02;
	CCL.LUT1CTRLB = CCL_INSEL0_TCB0_gc | CCL_INSEL1_TCD0_gc;
	CCL.LUT1CTRLA = CCL_OUTEN_bm | CCL_ENABLE_bm;
}

static void ccl_init(void)
{
	/* RS latch is reset when TCD starts new cycle, and set by AC */
	CCL.CTRLA = CCL_ENABLE_bm;
}

static void carrier_timer_init(void)
{
	/* Should be 40Khz. 20Mhz/16/31 = 40322 */
	TCB0.CTRLB = TCB_CCMPEN_bm | TCB_CNTMODE_PWM8_gc;
	TCB0.CCMPL = 30;
	TCB0.CCMPH = 14;
	TCB0.CTRLA = TCB_ENABLE_bm;
}

static void masking_timer_init(void)
{
	/* Compare B used for mask */
	/* Masking for LUT 0 from count 70 -> 0xfff. 0xba ~= 5ms */
	TCD0.CMPASET = 0;
	TCD0.CMPACLR = mode_table[selected_mode][1];
	TCD0.CMPBCLR = 0xfff;
	/* Mask for LUT 1. Output signal 0x10 ~= 410uS */
	TCD0.CMPBSET = mode_table[selected_mode][2];
	/* Input capture on rising edge. */
	TCD0.EVCTRLA = TCD_ACTION_bm | TCD_EDGE_bm | TCD_TRIGEI_bm;
	/* Interrupt for capture value */
	TCD0.INTCTRL = TCD_TRIGA_bm;
	/* Use system clock with div32 */
	TCD0.CTRLA = TCD_CNTPRES_DIV32_gc | TCD_CLKSEL_SYSCLK_gc | TCD_ENABLE_bm;

	/* Event channel for TCD to trigger capture from LUT0 */
	EVSYS.ASYNCCH0   = EVSYS_ASYNCCH0_CCL_LUT0_gc;
	EVSYS.ASYNCUSER6 = EVSYS_ASYNCUSER0_ASYNCCH0_gc;
}

static void ac_and_dac_init(void)
{
	VREF.CTRLA = VREF_DAC0REFSEL_2V5_gc;
	// VREF.CTRLB = VREF_DACREFEN_bm;

	/* Value for echo threshold. Should be a bit below idle (VDD/2) */
	DAC0.DATA  = mode_table[selected_mode][0];
	DAC0.CTRLA = DAC_ENABLE_bm;

	/* Set up AC */
	AC0.MUXCTRLA = AC_MUXNEG_DAC_gc;
	AC0.CTRLA    = AC_ENABLE_bm | AC_HYSMODE_10mV_gc;
}

static void set_system_prescaler(void)
{
	/* Set system clock prescaler to 16 */
	_PROTECTED_WRITE(CLKCTRL.MCLKCTRLB, 0x3 << 1 | 0x1);
}

static void button_init(void)
{
	BUTTON_PORT.DIRCLR         = BUTTON_PIN_MASK;
	BUTTON_PORT.BUTTON_PINCTRL = PORT_PULLUPEN_bm | PORT_ISC_FALLING_gc;

	BUTTON_PORT.OUTCLR = BUTTON_PIN_MASK;
}

static void temp_init(void)
{
	/* Turn off inputbuffer for ADC pin */
	PORTB.PIN4CTRL = PORT_ISC_INPUT_DISABLE_gc;

	/* Ref for ADC */
	VREF.CTRLA |= VREF_ADC0REFSEL_2V5_gc;

	ADC0.CTRLB  = ADC_SAMPNUM_ACC1_gc;
	ADC0.CTRLC  = ADC_PRESC_DIV32_gc | ADC_REFSEL_INTREF_gc;
	ADC0.CTRLE  = ADC_WINCM_OUTSIDE_gc;
	ADC0.MUXPOS = ADC_MUXPOS_AIN9_gc;
	ADC0.EVCTRL = ADC_STARTEI_bm;
	ADC0.WINHT  = 1;
	ADC0.WINLT  = 0;

	ADC0.INTCTRL = ADC_WCMP_bm;

	ADC0.CTRLA = ADC_ENABLE_bm;

	/* Triggered by TCD overflow */
	EVSYS.ASYNCCH1   = EVSYS_ASYNCCH1_TCD0_CMPBCLR_gc;
	EVSYS.ASYNCUSER1 = EVSYS_ASYNCUSER1_ASYNCCH1_gc;
}

int main(void)
{
	uint16_t tmp;

	set_system_prescaler();

	median_filter_init(&filter1, MEDIAN_FILTER_SIZE, values_bfr, sort_bfr);

	carrier_timer_init();
	masking_timer_init();

	ac_and_dac_init();

	seq_init();
	lut0_init();
	lut1_init();
	ccl_init();

	button_init();
	temp_init();

#if OUTPUT_USED == OUTPUT_UART
	init_uart()
#elif OUTPUT_USED == OUTPUT_SSD1306
	oled_init();
#endif
	    /* Set correct sleep mode */
	    set_sleep_mode(SLEEP_MODE_IDLE);
	/* Enable interrupt for button, temperature sensor and capture */
	sei();

	while (1) {
		if (task_interrupt_flags & (1 << INTERRUPT_FLAG_CAPTURE)) {
			tmp = TCD0.CAPTUREA;
			send_tc_data(tmp);
			task_interrupt_flags &= ~(1 << INTERRUPT_FLAG_CAPTURE);
		} else if (task_interrupt_flags & (1 << INTERRUPT_FLAG_TEMP)) {
			/* Search for temperature value */
			for (uint8_t i = 0; i < sizeof(sound_speed_table_conv) / 2; i++) {
				if (temperature_reading < temperature_thresholds[i]
				    && temperature_reading >= temperature_thresholds[i + 1]) {
					current_sound_volocity = sound_speed_table_conv[i];
					ADC0.WINHT             = temperature_thresholds[i];
					ADC0.WINLT             = temperature_thresholds[i + 1];
				}
			}
			task_interrupt_flags &= ~(1 << INTERRUPT_FLAG_TEMP);
		} else if (task_interrupt_flags & (1 << INTERRUPT_FLAG_BUTTON)) {
			selected_mode++;
			if (selected_mode >= (sizeof(mode_table) / 2 / 3)) {
				selected_mode = 0;
			}
			task_interrupt_flags &= ~(1 << INTERRUPT_FLAG_BUTTON);

			TCD0.CMPBSET = mode_table[selected_mode][2];
			TCD0.CMPACLR = mode_table[selected_mode][1];
			TCD0.CTRLE   = TCD_SYNC_bm;
			DAC0.DATA    = mode_table[selected_mode][0];
			oled_write(mode_text[selected_mode]);
			/* De-bounce before turning on pin interrupt */
			for (volatile uint16_t i = 0; i < 10000; i++)
				;
			/* Turn on interrupt on pin */
			BUTTON_PORT.BUTTON_PINCTRL = PORT_ISC_FALLING_gc | PORT_PULLUPEN_bm;
			for (volatile uint16_t i = 0; (i < 45000) & !(task_interrupt_flags & (1 << INTERRUPT_FLAG_BUTTON)); i++)
				;

		} else {
			sleep_mode();
		}
	}
}
