/*
 * lcd.c
 *
 * Created: 12.04.2025 19:24:37
 *  Author: Artem
 */ 

#include "lcd.h"

//----------------------------------------
void sendhalfbyte(unsigned char c)
{
	c<<=4;
	e1; //�������� ����� �
	_delay_us(50);
	PORTD&=0b00001111; //������� ���������� �� ������ DB4-DB7, ��������� �� �������
	PORTD|=c;
	e0; //��������� ����� �
	_delay_us(50);
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
void sendcharlcd(unsigned char c)
{
	sendbyte(c,1);
}
//----------------------------------------
void setpos(unsigned char x, unsigned y)
{
	char adress;
	adress=(0x40*y+x)|0b10000000;
	sendbyte(adress, 0);
}
//----------------------------------------
void LCD_ini(void)
{
	_delay_ms(15); //���� 15 �� (��� 45)
	sendhalfbyte(0b00000011);
	_delay_ms(4);
	sendhalfbyte(0b00000011);
	_delay_us(100);
	sendhalfbyte(0b00000011);
	_delay_ms(1);
	sendhalfbyte(0b00000010);
	_delay_ms(1);
	sendbyte(0b00101000, 0); //4���-����� (DL=0) � 2 ����� (N=1)
	_delay_ms(1);
	sendbyte(0b00001100, 0); //�������� ����������� �� ������� (D=1), ������� ������� �� �������� (C=0, B=0)
	_delay_ms(1);
	sendbyte(0b00000110, 0); //������ (���� �� � ��� � ���������) ����� ��������� �����
	_delay_ms(1);
}
//----------------------------------------
void clearlcd(void)
{
	sendbyte(0b00000001, 0);
	_delay_us(1500);
}
//----------------------------------------
void str_lcd (char str1[])
{
	char n;
	for(n=0;str1[n]!='\0';n++)
	sendcharlcd(str1[n]);
}
//----------------------------------------

