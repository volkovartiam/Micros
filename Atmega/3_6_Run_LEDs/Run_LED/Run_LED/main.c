/*
 * Run_LED.c
 *
 * Created: 29.03.2025 14:29:24
 * Author : Artem
 */ 

#include <avr/io.h>
#include <util/delay.h> 

// #define F_CPU 12000000

#define PORTD7 7
#define PORTD6 6
#define PORTD5 5
#define PORTD4 4
#define PORTD3 3
#define PORTD2 2
#define PORTD1 1
#define PORTD0 0

int main(void)
{
	DDRD = 0xFF;
	PORTD = 0b00000000;

    while (1) 
    {
		PORTD |= (1<<(PORTD2));
		_delay_ms(50000);		
		PORTD &= ~(1<<(PORTD2));
		_delay_ms(50000);
    }
}

