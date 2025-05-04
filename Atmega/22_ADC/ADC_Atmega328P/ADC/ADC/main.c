/*
 * ADC.c
 *
 * Created: 04.05.2025 20:43:16
 * Author : Artem
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


/*
ADMUX - ADC Multiplexer selection register
REFS1, REFS0 - voltage reference selection	
ADLAR - ADC left adjust result
MUX3, MUX2, MUX1, MUX0 - analog channel selection bits 

ADCSRA - ADC Control and status register A
ADEN - ADC Enable
ADSC - ADC Start conversion
ADATE - ADC auto trigger enable
ADIF - ADC interrupt flag
ADIE - ADC interrupt enable
ADPS2, ADPS1, ADPS0 - ADC prescaler select bits

ADCL and ADCH - ADC data register (is depending at ADLAR(0 or 1))

ADCSRB - ADC Control and status register B
ADTS2, ADTS1, ADTS0 - ADC auto trigger source

DIDR0 - digital input disable register 0
ADC5D, ADC4D, ADC3D, ADC2D, ADC1D, ADC0D - digital input disable
*/

#define AREF_VOLTAGE (1<<REFS1)|(1<<REFS0)

#define ADC0 (0<<MUX3)|(0<<MUX2)|(0<<MUX1)|(0<<MUX0)
#define ADC8_TEMP (1<<MUX3)|(0<<MUX2)|(0<<MUX1)|(0<<MUX0)
#define V_BG (1<<MUX3)|(1<<MUX2)|(1<<MUX1)|(0<<MUX0)

#define DIV_Factor_128 (1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0)

#define FREE_RUN_MODE (0<<ADTS2)|(0<<ADTS1)|(0<<ADTS0)

#include "usart.h"


int main(void)
{
	USART_Init (BAUD_9600);	
	ADC_Init();
	
	int adc_value = 0;

    while (1) 
    {
		adc_value = ADC_convert();
		int hc = adc_value>>8;
		USART_Transmit(hc);
		USART_Transmit(adc_value);		
		
		//USART_Transmit(0x0d);//переход в начало строки
		//USART_Transmit(0x0a);//переход на новую строку
		_delay_ms(500);
    }
}

void USART_OK()
{
	USART_Transmit('O');//Передаем при включении
	USART_Transmit('k');//сообщение "Ok!", что свидетельствует
	USART_Transmit('!');//о правильно работе программы
	USART_Transmit(0x0d);//переход в начало строки
	USART_Transmit(0x0a);//переход на новую строку
}

void ADC_Init(void)
{
	ADCSRA |= (1<<ADEN) // Разрешение использования АЦП
	|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);//Делитель 128 = 64 кГц
	ADMUX |= (1<<REFS1)|(1<<REFS0);		//Внутренний Источник ОН 2,56в, вход ADC0
}

int ADC_convert(void)
{
	ADCSRA |= (1<<ADSC);			//Начинаем преобразование
	while((ADCSRA & (1<<ADSC)));	//проверим закончилось ли аналого-цифровое преобразование
	return ADC;
}