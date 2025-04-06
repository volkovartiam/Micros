/*
 * usart.c
 *
 * Created: 04.04.2025 21:34:46
 *  Author: Artem
 */ 

#include "usart.h"

void USART_Init( unsigned int speed)//Инициализация модуля USART
{

	UBRR0H = (unsigned char)(speed>>8);
	UBRR0L = (unsigned char)speed;
	
	UCSR0B=(1<<RXEN0)|( 1<<TXEN0);	//Включаем прием и передачу по USART
	UCSR0B |= (1<<RXCIE0);			//Разрешаем прерывание при передаче
	
	UCSR0C = (1<<USBS0)|(3<<UCSZ00);
	
	//UCSR0A |= (1<<U2X0);				// Для 8 мгц
	//UCSR0C = (1<<UMSEL00)|(1<<USBS0)|(1<<UCSZ01)|(1<<UCSZ00);// Обращаемся именно к регистру UCSRC (URSEL=1),
	//ассинхронный режим (UMSEL=0), без контроля четности (UPM1=0 и UPM0=0),
	//1 стоп-бит (USBS=0), 8-бит посылка (UCSZ1=1 и UCSZ0=1)
	//UCSRC |= (1<<UPM1);//четность
}

void USART_Transmit( unsigned char data ) //Функция отправки данных
{
	while ( !(UCSR0A & (1<<UDRE0)) ); //Ожидание опустошения буфера приема
	UDR0 = data; //Начало передачи данных
}
