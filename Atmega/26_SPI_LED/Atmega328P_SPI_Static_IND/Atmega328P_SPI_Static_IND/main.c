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
	
	SPI_init();
	
	SPI_transmit(0xFF);
	_delay_ms(500);
	
	SPI_transmit(0x00);
	_delay_ms(500);

    while (1) 
    {
		for(uint8_t i=0; i<10; i++)
		{
			segchar(i);
			_delay_ms(500);
		}
    }

}

