/*
 * LCD.c
 *
 * Created: 03.04.2025 15:58:07
 * Author : 589
 */ 

#include "main.h"
//----------------------------------------
void port_init(void)
{
	PORTD=0x00;
	DDRD=0b11110000;
	
	PORTB=0x00;
	DDRB=0b00000011;
}
//----------------------------------------
int main(void)
{
	port_init(); 
	LCD_init(); 
	
	//setpos(8,0);
	send_char('0');
	send_char('1');
	send_char('3');
	_delay_ms(9000);
	clearlcd();
	
	/*	
	while(1)
	{
		str_lcd("abc");
		_delay_ms(5000);
		clearlcd();
		str_lcd("012");
		_delay_ms(5000);
		clearlcd();
	}
	*/
	
}
