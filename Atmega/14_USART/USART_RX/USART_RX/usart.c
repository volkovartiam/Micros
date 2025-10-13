/*
 * usart.c
 *
 * Created: 07.04.2025 20:55:55
 *  Author: Artem
 */ 

#include "usart.h"


void USART_Init(unsigned char baud)
{
	cli();
	UBRR0H = (unsigned char)(baud>>8);
	UBRR0L = (unsigned char)baud;
	
	/*
	UCSR0C = ASYNCHRONOUS | PARITY_MODE | STOP_BIT | DATA_BIT;
	ASYNCHRONOUS (0<<UMSEL00)
	PARITY_MODE (0<<UPM00)
	TWO_BIT (1<<USBS0)
	EIGHT_BIT (3<<UCSZ00)
	*/

	UCSR0B |=(1<<RXCIE0)|(1<<RXEN0)|(1<<TXEN0);	
	UCSR0C |= (1<<UCSZ01)|(1<<UCSZ00);
	sei();
}


void USART_Transmit(unsigned char data) 
{
	while ( !(UCSR0A & (1<<UDRE0)) );{
		UDR0 = data;
	}
}

