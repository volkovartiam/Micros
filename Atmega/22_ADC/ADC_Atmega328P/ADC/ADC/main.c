/*
 * ADC.c
 *
 * Created: 04.05.2025 20:43:16
 * Author : Artem
 */ 



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

#define AREF_VOLTAGE (0<<REFS1)|(0<<REFS0)
#define AVcc_VOLTAGE (0<<REFS1)|(1<<REFS0)
#define Internal_1_1_V (1<<REFS1)|(1<<REFS0)

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
	//ADC_Init_Temp();
	
	int adc_value = 0;
	int adch_value = 0;

    while (1) 
    {
		adc_value = ADC_convert();
		adch_value = adc_value>>8;
		USART_Transmit(adch_value);
		USART_Transmit(adc_value);		
		
		_delay_ms(500);
    }
}

void USART_OK()
{
	USART_Transmit('O');//�������� ��� ���������
	USART_Transmit('k');//��������� "Ok!", ��� ���������������
	USART_Transmit('!');//� ��������� ������ ���������
	USART_Transmit(0x0d);//������� � ������ ������
	USART_Transmit(0x0a);//������� �� ����� ������
}

void ADC_Init(void)
{
	ADCSRA |= (1<<ADEN)| 						// ���������� ������������� ���
			//(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0)
			  DIV_Factor_128;					//�������� 128 = 64 ���
	ADMUX |= AVcc_VOLTAGE;			//���������� �������� �� 2,56�, ���� ADC0
}


void ADC_Init_Temp(void)
{
	ADCSRA |= (1<<ADEN)| 						// ���������� ������������� ���
			  DIV_Factor_128;					//�������� 128 = 64 ���
	ADMUX |= Internal_1_1_V|ADC8_TEMP;			//���������� �������� �� 2,56�, ���� ADC0
}



int ADC_convert(void)
{
	ADCSRA |= (1<<ADSC);			//�������� ��������������
	while((ADCSRA & (1<<ADSC)));	//�������� ����������� �� �������-�������� ��������������
	return ADC;
}