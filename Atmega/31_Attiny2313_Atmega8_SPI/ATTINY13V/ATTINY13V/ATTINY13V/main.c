/*
 * ATTINY13V.c
 *
 * Created: 03.05.2025 13:45:12
 * Author : Artem
 */ 

#include <avr/io.h>
#include <util/delay.h> 

#define PORTB3 3

int main(void)
{
	DDRB = 0xFF;
	PORTB = 0b00001000;

	while (1)
	{
		PORTB |= (1<<(PORTB3));
		_delay_ms(500);
		PORTB &= ~(1<<(PORTB3));
		_delay_ms(500);
	}
}


