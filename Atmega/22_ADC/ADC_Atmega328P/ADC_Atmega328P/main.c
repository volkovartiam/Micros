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
	port_ini(); //Инициализируем порты
	LCD_init();  //Инициализируем дисплей
	ADC_Init(); //Инициализируем АЦП
	sei();
	clearlcd(); //Очистим дисплей

	while(1)
	{
		//adc_value = ADC_convert(); //Вызовем преобразование
		set_pos(0,0);
		send_char(adc_value/1000+0x30);			//Преобразуем число в код числа
		send_char((adc_value%1000)/100+0x30);	//Преобразуем число в код числа
		send_char((adc_value%100)/10+0x30);		//Преобразуем число в код числа
		send_char(adc_value%10+0x30);			//Преобразуем число в код числа
		set_pos(8,0);
		n= (float) adc_value / 400;
		send_char((unsigned char) n +0x30);					//Преобразуем число в код числа
		send_char('.');										//Преобразуем число в код числа
		send_char(((unsigned char) (n*10))%10 +0x30);		//Преобразуем число в код числа
		send_char(((unsigned char) (n*100))%10 +0x30);		//Преобразуем число в код числа
		_delay_ms(500);
	}
}