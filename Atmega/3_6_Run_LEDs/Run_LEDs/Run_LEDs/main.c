/*
 * Run_LEDs.c
 *
 * Created: 29.03.2025 16:36:12
 * Author : Artem
 */ 

#include <avr/io.h>
#include <util/delay.h>

#define F_CPU = 12000000L 

int main(void)
{
	unsigned char i = 0;
	
	DDRD = 0xFF;
	PORTD = 0b00000001;
	
    /* Replace with your application code */
    while (1) 
    {
		for(i = 0; i<=7; i++){
			PORTD = (1<<i);
			PORTD = ~PORTD;
			_delay_ms(5000);			
		} 
		
    }
}

