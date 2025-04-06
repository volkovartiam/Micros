/*
 * usart.c
 *
 * Created: 04.04.2025 21:34:46
 *  Author: Artem
 */ 

#include "usart.h"

void USART_Init( unsigned int speed)//������������� ������ USART
{

	UBRR0H = (unsigned char)(speed>>8);
	UBRR0L = (unsigned char)speed;
	
	UCSR0B=(1<<RXEN0)|( 1<<TXEN0);	//�������� ����� � �������� �� USART
	UCSR0B |= (1<<RXCIE0);			//��������� ���������� ��� ��������
	
	UCSR0C = (1<<USBS0)|(3<<UCSZ00);
	
	//UCSR0A |= (1<<U2X0);				// ��� 8 ���
	//UCSR0C = (1<<UMSEL00)|(1<<USBS0)|(1<<UCSZ01)|(1<<UCSZ00);// ���������� ������ � �������� UCSRC (URSEL=1),
	//������������ ����� (UMSEL=0), ��� �������� �������� (UPM1=0 � UPM0=0),
	//1 ����-��� (USBS=0), 8-��� ������� (UCSZ1=1 � UCSZ0=1)
	//UCSRC |= (1<<UPM1);//��������
}

void USART_Transmit( unsigned char data ) //������� �������� ������
{
	while ( !(UCSR0A & (1<<UDRE0)) ); //�������� ����������� ������ ������
	UDR0 = data; //������ �������� ������
}
