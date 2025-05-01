/*
 * spi.h
 *
 * Created: 30.04.2025 19:09:02
 *  Author: Artem
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "main.h"

#define SPI_PORT PORTB
#define SPI_DDR DDRB

#define SS_PIN PORTB2
#define MOSI_PIN PORTB3
#define SCK_PIN PORTB5

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


void SPI_transmit(uint8_t data_to_transfer);
void SPI_init(void);


#endif /* SPI_H_ */