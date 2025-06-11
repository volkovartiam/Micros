/*
 * Timer_V2.c
 *
 * Created: 07.06.2025 12:48:43
 * Author : Artem
 */ 


#define F_CPU 16000000L

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


/*
	TCCR0A 
	TCCR0A - Timer/Counter Control Regtister A
	COM0A1, COM0A0	- Compare Match Output A Mode
	COM0B1, COM0B0	- Compare Match Output B Mode
	WGM01, WGM01 - Waveform Generation Mode

	TCCR0B
	TCCR0B - Timer/Counter Control Regtister B
	FOC0A - Force output Compare A
	FOC0B - Force output Compare B
	WGM02 - Waveform Generation Mode
	CS2,CS1,CS0 - Clock Select	
	//Compare output mode non-PWM Mode, fast PWM Mode, Phase Correct PWM Mode

	TCNT0
	TCNT0 - Timer/Counter Register
	OCR0A
	OCR0A - Output Compare Register A
	OCR0B
	OCR0B - Output Compare Register B
	
	TIMSK0
	TIMSK0 - Timer/Counter Interrupt Mask Register
	OCIE0B - Timer/Counter Output Compare Match B Interrupt Enable
	OCIE0A - Timer/Counter Output Compare Match A Interrupt Enable
	TOIE0 - Timer/Counter Overflow Interrupt Enable 
		
	TIFR0 	
	TIFR0 - Timer/Counter Interrupt Flag Register
	OCF0B - Timer/Counter Output Compare B Match Flag
	OCF0A - Timer/Counter Output Compare A Match Flag
	TOV0 - Timer/Counter Overflow Interrupt Enable
			
*/ 

int counter = 0;

int timer_freg = 0;
float timer_period = 0;
float timer_inter_period = 0;


void init_timer_0(void){
	cli();
	TIMSK0 |= (1<<TOIE0);					// разрешаем прерывания по переполнению таймера
	TCCR0B |= (1<<CS02)|(1<<CS00);			// устанавливаем делитель тактовой частоты в 1024
	sei();
	
	timer_freg = F_CPU / 1024;					// получаем частоту таймера (расчет в режиме отладки)
	timer_period = (1.0/timer_freg)*1000;		// период таймера в милисекундах (умножение на 1000)
	timer_inter_period = timer_period * 0xFF;	// период срабатывания таймера,  0xFF - значение таймера по переполнению
	asm("nop");
		
}


void init_timer_1(void){
	cli();
	TIMSK0 |= (1<<TOIE0);					// разрешаем прерывания по переполнению таймера
	TCCR0B |= (1<<CS00);					// устанавливаем делитель тактовой частоты в 1 (без деления частоты)
	sei();
	
	timer_freg = F_CPU / 1;						// получаем частоту таймера (расчет в режиме отладки)
	timer_period = (1.0/timer_freg)*1000;		// период таймера в милисекундах (умножение на 1000)
	timer_inter_period = timer_period * 0xFF;	// период срабатывания таймера,  0xFF - значение таймера по переполнению
	asm("nop");
		
}



void initPins()
{
	DDRD = 0xFF;
	PORTD = 0b00000000;
}


int main(void){
	initPins();
	init_timer_1();
	
	while(1){
	}	
}


ISR(TIMER0_OVF_vect)
{
//	PIND = 0b10000001;
	PIND = PORTD0 | PORTD7;
}



