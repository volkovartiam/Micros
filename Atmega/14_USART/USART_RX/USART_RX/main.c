/*
 * USART_RX.c
 *
 * Created: 07.04.2025 20:47:51
 * Author : Artem
 */ 

#include "usart.h"
#include "main.h"

volatile uint8_t USART_ReceiveBuffer; // Global Buffer


int main()
{
	DDRB |= 1 << 5; // Configuring PB5 / D13 as Output
	USART_Init(BAUD_9600);

	while (1)
	{
	}
	return 0;
}


ISR(USART_RX_vect)
{
	USART_ReceiveBuffer = UDR0;
	if (USART_ReceiveBuffer == 'a')
	{
		PORTB |= 1<<5;    // Writing HIGH to glow LED
	}
	else
	{
		PORTB &= ~(1<<5); // Writing LOW
	}

}

