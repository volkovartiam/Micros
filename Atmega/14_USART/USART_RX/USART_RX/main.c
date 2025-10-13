/*
 * USART_RX.c
 *
 * Created: 07.04.2025 20:47:51
 * Author : Artem
 */ 

#include "usart.h"
#include "main.h"

#define LED_PIN 5
#define LED_ON_SYMBOL 'a'
volatile uint8_t USART_ReceiveBuffer; // Global Buffer


int main()
{
	DDRB |= 1 << LED_PIN;
	USART_Init(BAUD_9600);

	while (1)
	{
	}
	return 0;
}


ISR(USART_RX_vect)
{
	USART_ReceiveBuffer = UDR0;
	//Проверка на наличие ошибок фрейма, переполнения, четности
	if((UCSR0A & ((1 << FE0) | (1 << DOR0) | (1 << UPE0))) == 0) {
		if (USART_ReceiveBuffer == LED_ON_SYMBOL)
		{
			PORTB |= 1<< LED_PIN;    // Writing HIGH to glow LED
		}
		else
		{
			PORTB &= ~(1<<LED_PIN); // Writing LOW
		}		
	}

}

