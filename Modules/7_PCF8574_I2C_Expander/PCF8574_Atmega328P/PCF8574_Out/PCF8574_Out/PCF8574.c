/*
 * PCF8574.c
 *
 * Created: 13.05.2025 8:43:08
 *  Author: 589
 */ 

#include "PCF8574.h"

/*
void setAddressPCF8574(unsigned char address){
	#define PCF8574_ADDRESS address;
}
*/

void set_output_PCF8574(unsigned char data){
	I2C_Init();
	I2C_Start();
	I2C_Send_Data(I2C_PCF_ADDRESS_WITH_WRITE);
	I2C_Send_Data(data);
	I2C_Stop();
}

unsigned char get_input_PCF8574(){
	unsigned char dataFromInput = 0;
	I2C_Init();
	I2C_Start();
	
	I2C_Send_Data(I2C_PCF_ADDRESS_WITH_WRITE);
	I2C_Send_Data(1);
	
	I2C_Send_Data(I2C_PCF_ADDRESS_WITH_READ);
	dataFromInput = I2C_Read_Data();
	I2C_Stop();
	return dataFromInput;
}
