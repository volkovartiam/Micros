/*
 * MCP23017_Out.c
 *
 * Created: 20.05.2025 8:09:11
 * Author : 589
 */ 


#include "main.h"

//#define ADDRESS (0b00100111 << 1)
#define ADDRESS (0b00100000 << 1)
//#define ADDRESS (0x20 << 1)				
#define READ 1
#define WRITE 0
#define ADDRESS_WITH_READ ADDRESS|READ
#define ADDRESS_WITH_WRITE ADDRESS|WRITE


void turn_all_HIGH()
{
		//BANK 0
		I2C_Init();
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_WRITE);
		I2C_Send_Data(0x00);	// IODIRA
		I2C_Send_Data(0x00);	// sets all port A pins to outputs
		I2C_Stop();
		
		I2C_Init();
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_WRITE);
		I2C_Send_Data(0x01);	// IODIRB
		I2C_Send_Data(0x00);	// sets all port B pins to outputs
		I2C_Stop();
		
		I2C_Init();
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_WRITE);
		I2C_Send_Data(0x12);	// 
		I2C_Send_Data(0xFF);	// sets all port to HIGH
		I2C_Stop();
	
		I2C_Init();
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_WRITE);
		I2C_Send_Data(0x13);	//
		I2C_Send_Data(0xFF);	// sets all port to HIGH
		I2C_Stop();
}


void turn_A_HIGH_B_LOW()
{
	I2C_Init();
	I2C_Start();
	I2C_Send_Data(ADDRESS_WITH_WRITE);
	I2C_Send_Data(0x00);	// IODIRA
	I2C_Send_Data(0x00);	// sets all port A pins to outputs
	I2C_Stop();
			
	I2C_Init();
	I2C_Start();
	I2C_Send_Data(ADDRESS_WITH_WRITE);
	I2C_Send_Data(0x01);	// IODIRB
	I2C_Send_Data(0x00);	// sets all port B pins to outputs
	I2C_Stop();
			
	I2C_Init();
	I2C_Start();
	I2C_Send_Data(ADDRESS_WITH_WRITE);
	I2C_Send_Data(0x12);			//
	//I2C_Send_Data(0x00);			// sets all port to HIGH
	I2C_Send_Data(0b00001100);		// 
	I2C_Stop();
			
	I2C_Init();
	I2C_Start();
	I2C_Send_Data(ADDRESS_WITH_WRITE);
	I2C_Send_Data(0x13);	//
	I2C_Send_Data(0xFF);	// sets all port to HIGH
	I2C_Stop();
}


uint8_t read_example(uint8_t data)
{
	I2C_Init();
	I2C_Start();
	I2C_Send_Data(ADDRESS_WITH_WRITE);
	I2C_Send_Data(0x12);			//
	
	I2C_Start();
	I2C_Send_Data(ADDRESS_WITH_READ);
	data = I2C_Read_Data(1);
	I2C_Stop();		
	return data;
}


uint8_t port_A_input(uint8_t data)
{
		I2C_Init();
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_WRITE);
		I2C_Send_Data(0x00);	
		I2C_Send_Data(0xFF);	
		I2C_Stop();
		
		I2C_Init();
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_WRITE);
		I2C_Send_Data(0x0C);	
		I2C_Send_Data(0xFF);	
		I2C_Stop();
			
		I2C_Init();
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_WRITE);
		I2C_Send_Data(0x12);			//
	
		I2C_Start();
		I2C_Send_Data(ADDRESS_WITH_READ);
		data = I2C_Read_Data(1);
		I2C_Stop();
	return data;
}


int main(void)
{
	uint32_t delay = 2500; 
	uint8_t data = 0;

    while(1)
    {
	
		//turn_all_HIGH();	
		//turn_A_HIGH_B_LOW();
		//data = read_example(data);
		
		
		data = port_A_input(data);

		USART_Transmit(data);
		_delay_ms(delay);

	}	
	
}

/*
	Sequantional mode
	IOCON register, INPUT
*/