/*
 * EEPROM_1.c
 *
 * Created: 07.04.2025 12:47:10
 * Author : 589
 */ 

#include <avr/io.h>


int main(void)
{

	EE_write_data_by_address(0x01, 0);
	EE_write_data_by_address(0x02, 1);
	EE_write_data_by_address(0x03, 2);

	unsigned char readed = EE_read_by_address(0);

	if(readed == 0x01){
		EE_write_data_by_address(0x05, 5);	
	}else{
		EE_write_data_by_address(0x25, 5);
	}

    while (1) 
    {

		
		
		/*
		EE_erase_by_address(0);
		EE_erase_by_address(1);
		EE_erase_by_address(2);		
		*/
    }
}

