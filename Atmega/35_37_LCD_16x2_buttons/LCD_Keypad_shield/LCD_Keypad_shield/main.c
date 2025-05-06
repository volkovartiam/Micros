/*
 * LCD_Keypad_shield.c
 *
 * Created: 05.05.2025 21:10:50
 * Author : Artem
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
	
	set_pos(8,0);
	send_char('0');
	send_char('1');
	send_char('3');
	
	set_pos(0,1);
	send_char('5');
	send_char('6');
	send_char('7');
	
	_delay_ms(9000);
	//set_pos(0,0);
	//set_pos(0,1);

	//clearlcd();
	
	/**/
	while(1)
	{
		str_lcd("abc");
		_delay_ms(5000);
		//clearlcd();
		//str_lcd("01234");
		//_delay_ms(9000);
		clearlcd();
	}
	/**/
	
}

