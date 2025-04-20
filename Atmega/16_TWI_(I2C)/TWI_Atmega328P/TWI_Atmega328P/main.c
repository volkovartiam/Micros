/*
 * TWI_Atmega328P.c
 *
 * Created: 14.04.2025 20:45:30
 * Author : Artem
 */ 

#include "main.h"

/*
Для работы с мс/х AT24C32 в одном байте требуется передать адресс и бит чтения/записи
*/

/*
#define I2C_ADDRESS (0x50 << 1)
#define READ (1 << 1)
#define WRITE (0 << 1)
#define I2C_ADDRESS_WITH_READ I2C_ADDRESS|READ
#define I2C_ADDRESS_WITH_WRITE I2C_ADDRESS|WRITE
*/

int main(void)
{
	/*
	I2C_Init();
	I2C_Start();			
	I2C_Send_Data(I2C_ADDRESS_WITH_WRITE);
	I2C_Send_Data(0);				
	I2C_Send_Data(0);				
	I2C_Stop();			
	*/
	
	EE_Write_Byte_Data(0x5, 0x00, 0x00);
	//EE_ReadByte();
	
	EE_ReadByte_Data(0x00, 0x00);
	
	
    while(1)
    {
    }
	
}
