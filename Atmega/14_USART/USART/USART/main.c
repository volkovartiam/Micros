/*
 * USART.c
 *
 * Created: 04.04.2025 21:30:13
 * Author : Artem
 */ 

#include "main.h"
//-----------------------------------------------------------
int main(void)
{
	 USART_Init (8);//115200
	while(1)
	{
		
		USART_Transmit('O');//�������� ��� ���������
		USART_Transmit('k');//��������� "Ok!", ��� ���������������
		USART_Transmit('!');//� ��������� ������ ���������
		USART_Transmit(0x0d);//������� � ������ ������
		USART_Transmit(0x0a);//������� �� ����� ������
		_delay_ms(500);
		/**/
	}
}
