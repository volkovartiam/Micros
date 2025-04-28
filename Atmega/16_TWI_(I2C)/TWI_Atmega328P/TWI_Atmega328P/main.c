/*
 * TWI_Atmega328P.c
 *
 * Created: 14.04.2025 20:45:30
 * Author : Artem
 */ 

#include "main.h"

extern err1;

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


#define I2C_PCF_ADDRESS (0x20 << 1)
#define READ (1 << 1)
#define WRITE (0 << 1)
#define I2C_PCF_ADDRESS_WITH_READ I2C_PCF_ADDRESS|READ
#define I2C_PCF_ADDRESS_WITH_WRITE I2C_PCF_ADDRESS|WRITE
/*мс/х PCF8574 отработала должным образом */

int main(void)
{
	/**/
	I2C_Init();
	I2C_Start();			
	I2C_Send_Data(I2C_PCF_ADDRESS_WITH_WRITE);
//	I2C_Send_Data(0xFF);		
	I2C_Send_Data(0x01);	
	I2C_Stop();			
	/**/

	/*
	for(int i = 0; i<0xFF; i++ ){
		I2C_Init();
		I2C_Start();
		I2C_Send_Data(I2C_PCF_ADDRESS_WITH_WRITE);
		I2C_Send_Data(i);
		I2C_Stop();
		_delay_ms(1000);
	}
	*/
	
	I2C_Init();
	I2C_Start();
	I2C_Send_Data(I2C_PCF_ADDRESS_WITH_WRITE);
	I2C_Send_Data(0b11110011);
	I2C_Send_Data(0b11110000);
	I2C_Stop();
	_delay_ms(1000);
	
	
	
	/*
	EE_Write_Byte_Data(0x07, 0x01, 0x00);
	//EE_ReadByte();
	
	unsigned char readed = EE_ReadByte_Data(0x01, 0x00);
	USART_Transmit(readed);
	USART_Transmit(err1);
	*/
	
    while(1)
    {
    }
	
}
