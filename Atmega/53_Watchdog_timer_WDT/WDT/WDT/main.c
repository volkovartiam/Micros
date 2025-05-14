/*
 * WDT.c
 *
 * Created: 13.05.2025 20:35:45
 * Author : Artem
 */ 


#include "main.h"

#define LED1_ON() PORTD|=0b00001000
#define LED1_OFF() PORTD&=~(0b00001000)
#define LED2_ON() PORTD|=0b00010000
#define LED2_OFF() PORTD&=~(0b00010000)
#define LED3_ON() PORTD|=0b00100000
#define LED3_OFF() PORTD&=~(0b00100000)
#define LED4_ON() PORTD|=0b01000000
#define LED4_OFF() PORTD&=~(0b01000000)
#define LED5_ON() PORTD|=0b10000000
#define LED5_OFF() PORTD&=~(0b10000000)
#define LED6_ON() PORTB|=0b00000001
#define LED6_OFF() PORTB&=~(0b00000001);
#define LED7_ON() PORTB|=0b00000010
#define LED7_OFF() PORTB&=~(0b00000010);
#define LED8_ON() PORTB|=0b00000100
#define LED8_OFF() PORTB&=~(0b00000100);
#define LED9_ON() PORTB|=0b00001000
#define LED9_OFF() PORTB&=~(0b00001000);
#define LED10_ON() PORTB|=0b00010000
#define LED10_OFF() PORTB&=~(0b00010000);

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


int main(void)
{
	DDRD |= 0b11111000;
	DDRD &= ~(0b00000100);		//INT0
	PORTD &= ~(0b11111000);
	PORTD |= 0b00000100;		//PD2 PULL UP
	
	DDRB |= 0b00011111;
	PORTB &= ~(0b00011111);
	
	TCCR1B |= (1<<WGM12);		//CTC (Clear Timer on Compare match)
	TIMSK1 |= (1<<OCIE1A);		//Output Compare A Match Interrupt Enable
	OCR1AH = 0b01111010;		//compare value
	OCR1AL = 0b00010010;
	TCCR1B |= (1<<CS12);		//div 256
	EICRA |= (1<<ISC01);		//falling eddge
	EIMSK |= (1<<INT0);			//EXT INT
	
	sei();
	//tim1_count=0;
	//wdt_enable(WDTO_2S);
	wdt_enable(WDTO_4S);

	
	while (1)
	{
	}
}


