/*
 * ADC_Interrupt.c
 *
 * Created: 05.05.2025 9:39:01
 * Author : 589
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
#define ADC1 (0<<MUX3)|(0<<MUX2)|(0<<MUX1)|(1<<MUX0)
#define ADC8_TEMP (1<<MUX3)|(0<<MUX2)|(0<<MUX1)|(0<<MUX0)
#define V_BG (1<<MUX3)|(1<<MUX2)|(1<<MUX1)|(0<<MUX0)

#define DIV_Factor_128 (1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0)

#define FREE_RUN_MODE (0<<ADTS2)|(0<<ADTS1)|(0<<ADTS0)

#include "usart.h"

char high_adc=0;
char low_adc=0;

int main(void)
{
	USART_Init (BAUD_9600);
	ADC_Init();
	//ADC_Init_Temp();
	sei();
	
	int adc_value = 0;
	int adch_value = 0;

	while (1)
	{
		USART_Transmit(high_adc);
		USART_Transmit(low_adc);
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
			  DIV_Factor_128|					//�������� 128 = 64 ���
			  (1<<ADSC)|						//������ ��������������
			  (1<<ADATE)|						//����������� ����� ������ ���
			  (1<<ADIE);						//���������� ���������� �� ���
			  			  
	ADMUX |= AVcc_VOLTAGE|ADC0;	
	//ADMUX |= AVcc_VOLTAGE|ADC8_TEMP;
	//ADMUX |= AVcc_VOLTAGE|V_BG;	
		
}


void ADC_Init_Temp(void)
{
	ADCSRA |= (1<<ADEN)| 						// ���������� ������������� ���
	DIV_Factor_128;								//�������� 128 = 64 ���
	ADMUX |= Internal_1_1_V|ADC8_TEMP;			//���������� �������� �� 1,1�
}


int ADC_convert(void)
{
	ADCSRA |= (1<<ADSC);			//�������� ��������������
	while((ADCSRA & (1<<ADSC)));	//�������� ����������� �� �������-�������� ��������������
	return ADC;
}

ISR(ADC_vect)
{
	low_adc = ADCL;
	high_adc = ADCH;				//������� ����� �������� ADC ������ ���� ������� ���������, ����� �� ����������� ��������������
	//adc_value = high_adc*256+low_adc;
}
//---