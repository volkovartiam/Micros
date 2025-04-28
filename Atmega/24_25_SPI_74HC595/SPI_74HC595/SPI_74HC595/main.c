/*
 * SPI_74HC595.c
 *
 * Created: 28.04.2025 19:20:00
 * Author : Artem
 */ 

#include "main.h"

//SPCR - SPI Control Register  
//SPIE //SPE //DORD	//MSTR	//CPOL	//CPHA	//SPR1	//SPR0 
 
#define SPIE_Interrupt_Enable (1<<SPIE)
#define SPIE_Interrupt_Disable (0<<SPIE)
#define SPE_Enable (1<<SPE)
#define SPE_Disable (0<<SPE)

#define LSB_Order (1<<DORD)
#define MSB_Order (0<<DORD)
#define Master_Select (1<<MSTR)
#define Slave_Select (0<<MSTR)

#define CPOL_Rising (0<<CPOL)
#define CPOL_Falling (1<<CPOL)
#define CPHA_0 (0<<CPHA)
#define CPHA_1 (1<<CPHA)

#define F_OSC_4 (0<<SPR1)|(0<<SPR0)			// SPI2X = 0
#define F_OSC_16 (0<<SPR1)|(1<<SPR0)		// SPI2X = 0
#define F_OSC_64 (1<<SPR1)|(0<<SPR0)		// SPI2X = 0
#define F_OSC_128 (1<<SPR1)|(1<<SPR0)		// SPI2X = 0

//SPSR - SPI Status Register  
//SPIF	//WCOL	//SPI2X
#define DOUBLE_SPI_SPEED_ENABLED (1<<SPI2X)		// SPI2X = 1
#define DOUBLE_SPI_SPEED_DISABLED (0<<SPI2X)	// SPI2X = 1

//SPDR - SPI Data Register
#define SPI_DATA_TRANSFER SPDR	

#define Wait_Transmission_Complete !(SPSR&(1<<SPIF))


int main(void)
{
	

	DDRB |= ((1<<PORTB2)|(1<<PORTB3)|(1<<PORTB5)); 
	PORTB &= ~((1<<PORTB2)|(1<<PORTB3)|(1<<PORTB5));
	
	SPCR |= (SPIE_Interrupt_Disable|SPE_Enable|MSB_Order|Master_Select|CPOL_Rising|CPHA_0|F_OSC_4); 
	//SPCR = ((1<<SPE)|(1<<MSTR)); //¬ключим шину, объ€вим ведущим.
	//SPDR |= (DOUBLE_SPI_SPEED_DISABLED);	
	
	
	SPI_transmit(0xFF);
	_delay_ms(2000);
	
	
	SPI_transmit(0x00);
	_delay_ms(2000);



	/*
	SPDR = 0b11111111;
	while (!(SPSR&(1<<SPIF)));
	PORTB |= (1<<PORTB2);
	PORTB &= ~(1<<PORTB2);
	_delay_ms(2000);
	*/

    while (1) 
    {
		
		for(uint8_t i=0; i<256; i++)
		{
			SPI_transmit(i);
			_delay_ms(50);
		}
		
    }
}

void SPI_transmit(uint8_t data_to_transfer)
{
	SPI_DATA_TRANSFER = data_to_transfer;
	while (Wait_Transmission_Complete){}
	PORTB |= (1<<PORTB2);
	PORTB &= ~(1<<PORTB2);
}

