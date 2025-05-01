/*
 * spi.c
 *
 * Created: 30.04.2025 19:09:19
 *  Author: Artem
 */ 

#include "spi.h"

void SPI_init(){
	SPI_DDR |= ((1<<SS_PIN)|(1<<MOSI_PIN)|(1<<SCK_PIN));
	SPI_PORT &= ~((1<<SS_PIN)|(1<<MOSI_PIN)|(1<<SCK_PIN));
	
	SPCR |= (SPIE_Interrupt_Disable|SPE_Enable|MSB_Order|Master_Select|CPOL_Rising|CPHA_0|F_OSC_4);
	//SPCR = ((1<<SPE)|(1<<MSTR)); //¬ключим шину, объ€вим ведущим.
	//SPDR |= (DOUBLE_SPI_SPEED_DISABLED);
}


void SPI_transmit(uint8_t data_to_transfer)
{
	SPI_DATA_TRANSFER = data_to_transfer;
	while (Wait_Transmission_Complete){}
	SPI_PORT |= (1<<SS_PIN);
	SPI_PORT &= ~(1<<SS_PIN);
}
