/*
 * PoolingRx.c
 *
 * Created: 09.04.2025 20:05:41
 * Author : Artem
 */ 

#define F_CPU 16000000UL // Defining the CPU Frequency

#include <avr/io.h>      // Contains all the I/O Register Macros
#include <util/delay.h>  // Generates a Blocking Delay

#define USART_BAUDRATE 9600 // Desired Baud Rate
#define BAUD_PRESCALER (((F_CPU / (USART_BAUDRATE * 16UL))) - 1)

#define ASYNCHRONOUS (0<<UMSEL00) // USART Mode Selection

#define DISABLED    (0<<UPM00)
#define EVEN_PARITY (2<<UPM00)
#define ODD_PARITY  (3<<UPM00)
#define PARITY_MODE  DISABLED // USART Parity Bit Selection

#define ONE_BIT (0<<USBS0)
#define TWO_BIT (1<<USBS0)
#define STOP_BIT ONE_BIT      // USART Stop Bit Selection

#define FIVE_BIT  (0<<UCSZ00)
#define SIX_BIT   (1<<UCSZ00)
#define SEVEN_BIT (2<<UCSZ00)
#define EIGHT_BIT (3<<UCSZ00)
#define DATA_BIT   EIGHT_BIT  // USART Data Bit Selection

void USART_Init()
{
	// Set Baud Rate
	UBRR0H = BAUD_PRESCALER >> 8;
	UBRR0L = BAUD_PRESCALER;
	
	// Set Frame Format
	UCSR0C = ASYNCHRONOUS | PARITY_MODE | STOP_BIT | DATA_BIT;
	
	// Enable Receiver and Transmitter
	UCSR0B = (1<<RXEN0) | (1<<TXEN0);
}

uint8_t USART_ReceivePolling()
{
	uint8_t DataByte;
	while (( UCSR0A & (1<<RXC0)) == 0) {}; // Do nothing until data have been received
	DataByte = UDR0 ;
	return DataByte;
}

int main()
{
	DDRB |= 1 << 5; // Configuring PB5 / D13 as Output
	USART_Init();
	char LocalData;
	while (1)
	{
		LocalData = USART_ReceivePolling();
		if (LocalData == 'a')
		{
			PORTB |= 1<<5;    // Writing HIGH to glow LED
		}
		else
		{
			PORTB &= ~(1<<5); // Writing LOW
		}
		_delay_ms(1000);
	}
	return 0;
}

