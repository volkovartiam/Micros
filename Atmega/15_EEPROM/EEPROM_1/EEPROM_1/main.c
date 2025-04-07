/*
 * EEPROM_1.c
 *
 * Created: 07.04.2025 12:47:10
 * Author : 589
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		EEPROM_write(1, 0x61);
		EEPROM_write(0, 0x60);
		EEPROM_write(2, 0x62);
    }
}

