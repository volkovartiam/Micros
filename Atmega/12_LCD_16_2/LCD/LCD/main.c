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
	DDRD=0xFF;
}
//----------------------------------------
int main(void)
{
	port_ini(); //�������������� �����
	LCD_ini();  //�������������� �������
	setpos(0,0);
	str_lcd("Hello World!");
	setpos(2,1);
	str_lcd("String 2");
	while(1)
	{
	}
}
