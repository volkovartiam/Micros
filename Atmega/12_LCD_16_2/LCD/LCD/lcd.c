#include "lcd.h"

//----------------------------------------
void sendhalfbyte(unsigned char c)
{
	e0;					//выключаем линию Е
	_delay_us(1);
	c<<=4;
	e1;					//включаем линию Е
	_delay_us(1);
	PORTD&=0b00001111;  //стираем информацию на входах DB4-DB7, остальное не трогаем
	PORTD|=c;
	e0;					//выключаем линию Е
	_delay_us(100);
}

//----------------------------------------
void sendbyte(unsigned char c, unsigned char mode)
{
	if (mode==0) rs0;
	else         rs1;
	unsigned char hc=0;
	hc=c>>4;
	sendhalfbyte(hc); sendhalfbyte(c);
}
//----------------------------------------
void sendchar(unsigned char c)
{
	sendbyte(c,1);
}
//----------------------------------------
void setpos(unsigned char x, unsigned y)
{
	char adress;
	adress=(0x40*y+x)|0x80;  //0b10000000;
	sendbyte(adress, 0);
}
//----------------------------------------
void LCD_ini(void)
{
	/*
	_delay_ms(15); //Ждем 15 мс (стр 45)
	sendhalfbyte(0b00000011);
	_delay_ms(4);
	sendhalfbyte(0b00000011);
	_delay_us(100);
	sendhalfbyte(0b00000011);
	_delay_ms(1);
	sendhalfbyte(0b00000010);
	_delay_ms(1);
	
	sendbyte(0b00101000, 0); //4бит-режим (DL=0) и 2 линии (N=1)
	_delay_ms(1);
	sendbyte(0b00001100, 0); //включаем изображение на дисплее (D=1), курсоры никакие не включаем (C=0, B=0)
	_delay_ms(1);
	sendbyte(0b00000110, 0); //курсор (хоть он у нас и невидимый) будет двигаться влево
	_delay_ms(1);
	*/
	
	_delay_us(50000); //Ждем 15 мс (стр 45)
	rs0;
	e0;
	
	sendhalfbyte(0b00000011);
	_delay_us(4500);
	sendhalfbyte(0b00000011);
	_delay_us(4500);
	sendhalfbyte(0b00000011);
	_delay_us(150);
	sendhalfbyte(0b00000010);
	_delay_us(150);
		
	/**/	
	sendbyte(0b00101000, 0); //4бит-режим (DL=0) и 2 линии (N=1)
	_delay_us(4500);
	sendbyte(0b00001100, 0); //включаем изображение на дисплее (D=1), курсоры никакие не включаем (C=0, B=0)
	_delay_us(150);
	sendbyte(0b00000110, 0); //курсор (хоть он у нас и невидимый) будет двигаться влево
	_delay_us(150);
	
	sendbyte(0b00000001, 0);
	/**/
	
	
}
//----------------------------------------
void clearlcd()
{
	sendbyte(0b00000001, 0);
	_delay_us(2000);
}
//----------------------------------------
void str_lcd (char str1[])
{  
	char n;
	for(n=0;str1[n]!='\0';n++)
	sendchar((unsigned char)str1[n]);
}
//----------------------------------------