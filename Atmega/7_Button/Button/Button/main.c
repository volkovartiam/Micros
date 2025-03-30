/*
 * Button.c
 *
 * Created: 29.03.2025 18:35:01
 * Author : Artem
 */ 
#include <avr/io.h>
#include <util/delay.h>

#define F_CPU = 12000000L

int main(void)
{
	unsigned char i = 0;
	
	DDRD = 0xFF;
	PORTD = 0b00000000;
	
	DDRB = 0x00;
	PORTB = 0b00000001;
	
	/* Replace with your application code */
	while (1)
	{
		
		if ((PINB&0b00000001)) {
			for(i = 0; i<=7; i++){
				PORTD = (1<<i);
				PORTD = ~PORTD;
				_delay_ms(5000);
			}
		}
		_delay_ms(5000);
		
	}
}
