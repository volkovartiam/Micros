/*
 * EEPROM_3.c
 *
 * Created: 22.10.2025 20:32:23
 * Author : Artem
 */ 

//#define F_CPU 16000000L

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/eeprom.h>
#include <util/delay.h>

#define F_CPU 16000000L		//proteus

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
    
	eeprom_write_byte(0x0, 0x0);
	eeprom_write_byte(0x1, 0x1);
	eeprom_write_byte(0x2, 0x2);	
	eeprom_write_byte(0x3, 0x3);
	eeprom_write_byte(0x4, 0x4);
	eeprom_write_byte(0x5, 0x5);
	
	
	init_blink();
	unsigned char x = 0;
	x = eeprom_read_byte(0x5);
	
	
    while (1) 
    {
		if(x == 5){
			blink();
		}		
    }
}

