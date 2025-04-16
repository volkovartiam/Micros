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
		EE_write_data_by_address(0x77, 0);
		EE_write_data_by_address(0x88, 1);
		EE_write_data_by_address(0x99, 2);
		
		/*
		EE_erase_by_address(0);
		EE_erase_by_address(1);
		EE_erase_by_address(2);		
		*/
    }
}

