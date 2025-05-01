/*
 * spi.c
 *
 * Created: 30.04.2025 19:09:19
 *  Author: Artem
 */ 

#include "spi.h"

void SPI_transmit(uint8_t data_to_transfer)
{
	SPI_DATA_TRANSFER = data_to_transfer;
	while (Wait_Transmission_Complete){}
	SS_PORT |= (1<<SS_PIN);
	SS_PORT &= ~(1<<SS_PIN);
}
