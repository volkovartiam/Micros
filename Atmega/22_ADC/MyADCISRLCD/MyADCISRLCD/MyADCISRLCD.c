
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
	float n;
	adc_value=0;
	port_ini(); //�������������� �����
	LCD_ini();  //�������������� �������
	ADC_Init(); //�������������� ���
	sei();
	clearlcd(); //������� �������

	while(1)
	{
		//adc_value = ADC_convert(); //������� ��������������
		setpos(0,0);
		sendcharlcd(adc_value/1000+0x30);//����������� ����� � ��� �����
		sendcharlcd((adc_value%1000)/100+0x30);//����������� ����� � ��� �����
		sendcharlcd((adc_value%100)/10+0x30);//����������� ����� � ��� �����
		sendcharlcd(adc_value%10+0x30);//����������� ����� � ��� �����
		setpos(8,0);
		n= (float) adc_value / 400;
		sendcharlcd((unsigned char) n +0x30);//����������� ����� � ��� �����
		sendcharlcd('.');//����������� ����� � ��� �����
		sendcharlcd(((unsigned char) (n*10))%10 +0x30);//����������� ����� � ��� �����
		sendcharlcd(((unsigned char) (n*100))%10 +0x30);//����������� ����� � ��� �����
		_delay_ms(500);
	}
}