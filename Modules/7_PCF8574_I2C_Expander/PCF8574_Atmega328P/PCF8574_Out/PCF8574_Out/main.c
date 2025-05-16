/*
 * PCF8574_Out.c
 *
 * Created: 13.05.2025 8:14:03
 * Author : 589
 */ 

#include "main.h"


void blink_led()
{
	PINB |= (1<<PORTB5);
	_delay_ms(2000);
}

int main(void)
{
	/*
	set_output_PCF8574(0b01010101);
	_delay_ms(1000);
	set_output_PCF8574(0b01010101 << 1);  
	_delay_ms(1000);
	/**/
	
	/*
	DDRB |= (1<<PORTB5); 
	PORTB |= (1<<PORTB5);
	_delay_ms(2000);	
	PORTB &= ~(1<<PORTB5);
	_delay_ms(2000);
	PORTB |= (1<<PORTB5);
	_delay_ms(2000);
	*/
	//init_int();
	
	
    while(1)
    {
		//blink_led();

		/*
		for(int i = 0; i<0xFF; i++){
			set_output_PCF8574(i);
			_delay_ms(100);
		}
		/**/
		unsigned char data = get_input_PCF8574();
		USART_Transmit(data);
		//USART_Transmit(0x0d);
		//USART_Transmit(0x0a);
		_delay_ms(4000);
		/**/
	}
	
	
}

