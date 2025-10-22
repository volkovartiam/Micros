/*
 * EEPROM_2.c
 *
 * Created: 20.10.2025 20:20:25
 * Author : Artem
 */ 


#define F_CPU 16000000L		//hardware

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>

//#define F_CPU 16000000L		//proteus


void EE_write_by_address(unsigned char ucData, unsigned int uiAddress);	
void EE_erase_by_address(unsigned int uiAddress);
unsigned char EE_read_by_address(unsigned int uiAddress);


void EE_write_by_address(unsigned char ucData, unsigned int uiAddress)
{
	while(EECR & (1<<EEPE) ){}	/* Wait for completion of previous write */	
	EEDR = ucData;
	EEAR = uiAddress;

	EECR |=  (0<<EEPM1)|(0<<EEPM0);	
	EECR |=  (1<<EEMPE);
	EECR |=  (1<<EEPE);
	/**/
}


void EE_erase_by_address(unsigned int uiAddress)
{
	while(EECR & (1<<EEPE) ){}	/* Wait for completion of previous write */
	
	//EEDR = 0x00;
	EEAR = uiAddress;
	
	EECR |=  (0<<EEPM1)|(1<<EEPM0);
	EECR |=  (1<<EEMPE);
	EECR |=  (1<<EEPE);
}


unsigned char EE_read_by_address(unsigned int uiAddress){
		while(EECR & (1<<EEPE)) {}
		EEAR = uiAddress;	
		EECR |= (1<<EERE);	
		return EEDR;		
}


#define led 5
void blink()
{
	PORTB |= (1 << led);
	_delay_ms(500);
	PORTB &= (~(1 << led));	
	_delay_ms(500);
}


void init_blink()
{
	DDRB |= (1<<(led));
}

int main(void)
{
	/*
	EE_write_by_address(0x0, 0x0);
	EE_write_by_address(0x1, 0x1);	
	EE_write_by_address(0x2, 0x2);
	EE_write_by_address(0x3, 0x3);
	EE_write_by_address(0x4, 0x4);
	EE_write_by_address(0x5, 0x5);
	*/
	/*
	EE_erase_by_address(0x0);
	EE_erase_by_address(0x1);
	EE_erase_by_address(0x2);
	EE_erase_by_address(0x3);
	EE_erase_by_address(0x4);
	EE_erase_by_address(0x5);
	*/
	
	init_blink();
	unsigned char x = 0;
		
    while (1) 
    {
		x = EE_read_by_address(0x5);
		//x = 5;
		if(x == 5){
			blink();
		}
	}
	
}

