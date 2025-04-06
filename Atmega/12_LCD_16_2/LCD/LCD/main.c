/*
 * LCD.c
 *
 * Created: 03.04.2025 15:58:07
 * Author : 589
 */ 

#include "main.h"
//----------------------------------------
void port_ini(void)
{
	PORTD=0x00;
	DDRD=0b00001111;
	
	PORTB=0x00;
	DDRB=0b00000011;
}
//----------------------------------------
int main(void)
{
	port_ini(); //Инициализируем порты
	LCD_ini();  //Инициализируем дисплей
	
	
	setpos(0,0);
	str_lcd("Hello World!");
	setpos(1,1);
	str_lcd("String 2");
	/**/
	while(1)
	{
	}
}
