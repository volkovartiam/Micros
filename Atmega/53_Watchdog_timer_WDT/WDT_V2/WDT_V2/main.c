/*
 * WDT_V2.c
 *
 * Created: 14.05.2025 21:08:45
 * Author : Artem
 */ 

/*
 MCUSR Ц MCU Status Register		- регистр статуса микроконтроллера
 WDRF: Watchdog System Reset Flag	- флаг сброса сторожевого таймера
 BORF: Brown-out Reset Flag			- флаг сброса супервизором питани€
 EXTRF: External Reset Flag			- флаг внешнего сброса
 PORF: Power-on Reset Flag			- флаг сброса при подаче питани€
 
 WDTCSR Ц Watchdog Timer Control Register		- регистр управлени€ сторожевым таймером
 WDIF: Watchdog Interrupt Flag			- флаг прерывани€ сторожевого таймера
 WDIE: Watchdog Interrupt Enable		- включение прерывани€ сторожевого таймера
 WDCE: Watchdog Change Enable			- включение возможность изменени€ сторожевого таймера
 WDE: Watchdog System Reset Enable		- включение сброса системы сторожевым таймером	
 WDP3..0: Watchdog Timer Prescaler 3, 2, 1 and 0	- предварительный делитель частоты сторожевого таймера
*/


#include "main.h"

#define LED1_ON() PORTD |= (1<<PORTD3)		//0b00001000
#define LED1_OFF() PORTD &= ~(1<<PORTD3)	//(0b00001000)
#define LED2_ON() PORTD |= (1<<PORTD4)		//0b00010000
#define LED2_OFF() PORTD &= ~(1<<PORTD4)	//(0b00010000)
#define LED3_ON() PORTD |= (1<<PORTD5)
#define LED3_OFF() PORTD &= ~(1<<PORTD5)
#define LED4_ON() PORTD |= (1<<PORTD6)
#define LED4_OFF() PORTD &= ~(1<<PORTD6)
#define LED5_ON() PORTD |= (1<<PORTD7)
#define LED5_OFF() PORTD &= ~(1<<PORTD7)

#define LED6_ON() PORTB |= (1<<PORTB0)
#define LED6_OFF() PORTB &= ~(1<<PORTB0)
#define LED7_ON() PORTB |= (1<<PORTB1)
#define LED7_OFF() PORTB &= ~(1<<PORTB1)
#define LED8_ON() PORTB |= (1<<PORTB2)
#define LED8_OFF() PORTB &= ~(1<<PORTB2)
#define LED9_ON() PORTB |= (1<<PORTB3)
#define LED9_OFF() PORTB &= ~(1<<PORTB3)
#define LED10_ON() PORTB |= (1<<PORTB4)
#define LED10_OFF() PORTB &= ~(1<<PORTB4)

#define PORTD_OUT_PINS (1<<PORTD3)|(1<<PORTD4)|(1<<PORTD5)|(1<<PORTD6)|(1<<PORTD7)
#define PORTD_INT0_PIN (1<<PORTD2)
#define PORTB_OUT_PINS (1<<PORTB0)|(1<<PORTB1)|(1<<PORTB2)|(1<<PORTB3)|(1<<PORTB4)


unsigned char tim1_count=0;


ISR(INT0_vect)
{
	TIMSK1 &= ~(1<<OCIE1A);
}


ISR(TIMER1_COMPA_vect)
{
	switch (tim1_count)
	{
		case 0:
		LED10_OFF();
		LED1_ON();
		break;
		case 1:
		LED1_OFF();
		LED2_ON();
		break;
		case 2:
		//wdt_reset();
		asm("WDR");
		LED2_OFF();
		LED3_ON();
		break;
		case 3:;
		LED3_OFF();
		LED4_ON();
		break;
		case 4:
		LED4_OFF();
		LED5_ON();
		break;
		case 5:
		//wdt_reset();
		LED5_OFF();
		LED6_ON();
		break;
		case 6:
		LED6_OFF();
		LED7_ON();
		break;
		case 7:
		LED7_OFF();
		LED8_ON();
		break;
		case 8:
		//wdt_reset();
		LED8_OFF();
		LED9_ON();
		break;
		case 9:
		LED9_OFF();
		LED10_ON();
		break;
	}
	
	tim1_count++;
	if(tim1_count>9) {
		tim1_count=0;
	}
}


void init_ports()
{
	DDRD &=	~PORTD_INT0_PIN;
	DDRD |=	PORTD_OUT_PINS;		
	PORTD &= ~PORTD_INT0_PIN;
	PORTD |= PORTD_INT0_PIN;	
	
	DDRB |= PORTB_OUT_PINS;
	PORTB &= ~PORTB_OUT_PINS;
}


void init_timer_1()
{
	TCCR1B |= (1<<WGM12);		//CTC (Clear Timer on Compare match)
	TIMSK1 |= (1<<OCIE1A);		//Output Compare A Match Interrupt Enable
	OCR1AH = 0b01111010;		//compare value
	OCR1AL = 0b00010010;
	TCCR1B |= (1<<CS12);		//div 256
}


void init_ext_interrupt()
{
	EICRA |= (1<<ISC01);		//falling eddge
	EIMSK |= (1<<INT0);			//EXT INT
}

int main(void)
{
	init_ports();
	init_timer_1();
	init_ext_interrupt();
	
	sei();
	
	//tim1_count=0;
	
	
	//wdt_enable(WDTO_2S);
	//wdt_enable(WDTO_4S);
	
	//WDTCSR |= (1<<WDCE)|(1<<WDE)|(1<<WDP2)|(1<<WDP1)|(1<<WDP0);					// ѕосто€нный RESET
	//WDTCSR |= (1<<WDCE)|(1<<WDE)|(1<<WDIE)|(1<<WDP3)|(0<<WDP2)|(0<<WDP1)|(0<<WDP0);	// √аснет один светодиод, перезагрузки не происходит
	/*
	cli();
	asm("WDR");
	WDTCSR |= (1<<WDCE)|(1<<WDE);
	WDTCSR |= (1<<WDE)|(1<<WDIE)|(0<<WDP3)|(1<<WDP2)|(1<<WDP1)|(1<<WDP0);
	sei();
	*/
	
	/**/
	cli();
	//MCUSR |= (1<<WDRF);
	asm("WDR");
	WDTCSR |= (1<<WDCE)|(1<<WDE);	
	WDTCSR = (1<<WDE)|(1<<WDIE)|(0<<WDP3)|(1<<WDP2)|(1<<WDP1)|(1<<WDP0);	// |=  и = дают разные результаты
	sei();
	/**/
	
	while (1)
	{
	}
}

	

