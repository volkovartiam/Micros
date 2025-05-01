/*
 * SPI_74HC595.c
 *
 * Created: 28.04.2025 19:20:00
 * Author : Artem
 */ 

#include "main.h"
#include "spi.h"

/*
Модуль 74HC595 маркировка на плате:
Reset = MR
OE = OE
Clock = SCK // 13Pin
L_Clock = SS // 10 PIn
SERin = MOSI // PIn 11
*/


int main(void)
{
	
	DDRB |= ((1<<PORTB2)|(1<<PORTB3)|(1<<PORTB5)); 
	PORTB &= ~((1<<PORTB2)|(1<<PORTB3)|(1<<PORTB5));
	
	SPCR |= (SPIE_Interrupt_Disable|SPE_Enable|MSB_Order|Master_Select|CPOL_Rising|CPHA_0|F_OSC_4); 
	//SPCR = ((1<<SPE)|(1<<MSTR)); //Включим шину, объявим ведущим.
	//SPDR |= (DOUBLE_SPI_SPEED_DISABLED);	
	
	SPI_transmit(0xFF);
	_delay_ms(2000);
	
	SPI_transmit(0x00);
	_delay_ms(2000);

    while (1) 
    {
		for(uint8_t i=0; i<256; i++)
		{
			SPI_transmit(i);
			_delay_ms(50);
		}
    }

}


