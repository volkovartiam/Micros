/*
 * ADC_Atmega328P.c
 *
 * Created: 29.04.2025 15:05:24
 * Author : 589
 */ 

#include <avr/io.h>

#include "main.h"

void port_ini(void)
{
	PORTD=0x00;
	DDRD=0xFF;
}
//----------------------------------------
int main(void)
{
	float n;
	adc_value=0;
	port_ini(); //�������������� �����
	LCD_init();  //�������������� �������
	ADC_Init(); //�������������� ���
	sei();
	clearlcd(); //������� �������

	while(1)
	{
		//adc_value = ADC_convert(); //������� ��������������
		set_pos(0,0);
		send_char(adc_value/1000+0x30);			//����������� ����� � ��� �����
		send_char((adc_value%1000)/100+0x30);	//����������� ����� � ��� �����
		send_char((adc_value%100)/10+0x30);		//����������� ����� � ��� �����
		send_char(adc_value%10+0x30);			//����������� ����� � ��� �����
		set_pos(8,0);
		n= (float) adc_value / 400;
		send_char((unsigned char) n +0x30);					//����������� ����� � ��� �����
		send_char('.');										//����������� ����� � ��� �����
		send_char(((unsigned char) (n*10))%10 +0x30);		//����������� ����� � ��� �����
		send_char(((unsigned char) (n*100))%10 +0x30);		//����������� ����� � ��� �����
		_delay_ms(500);
	}
}