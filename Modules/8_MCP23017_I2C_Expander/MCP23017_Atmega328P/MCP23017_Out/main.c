/*
 * MCP23017_Out.c
 *
 * Created: 20.05.2025 8:09:11
 * Author : 589
 */ 


#include "main.h"

#define ADDRESS (0b00100111 << 1)
#define READ 1
#define WRITE 0
#define ADDRESS_WITH_READ PCF8574_ADDRESS|READ
#define ADDRESS_WITH_WRITE PCF8574_ADDRESS|WRITE

int main(void)
{
	uint32_t delay = 2500; 

    while(1)
    {
		/*	
		I2C_Init();
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_WRITE);
		I2C_Send_Data(0x00);	// IODIR
		I2C_Stop();
		
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_WRITE);
		I2C_Send_Data(0x00);	
		I2C_Stop();
		
		
		I2C_Send_Data(0x00);
		
		I2C_Send_Data(0x06);	// GPPUA
		I2C_Send_Data(0xFF);
	
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_WRITE);
		I2C_Send_Data(0x09);	// GPIO
		I2C_Stop();
		
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_WRITE);
		I2C_Send_Data(0xFF);		
		I2C_Stop();
		//USART_Transmit(data);
		_delay_ms(delay);
		/**/
		
		/**/
		I2C_Init();
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_WRITE);
		/*
		I2C_Send_Data(0x00);	// IODIR
		I2C_Send_Data(0x00);
				
		I2C_Send_Data(0x06);	// GPPUA
		I2C_Send_Data(0xFF);
		*/
		I2C_Send_Data(0x09);	// GPIO
		I2C_Send_Data(0xFF);
		I2C_Stop();
		/**/		

		_delay_ms(delay);
	}	
	
}

