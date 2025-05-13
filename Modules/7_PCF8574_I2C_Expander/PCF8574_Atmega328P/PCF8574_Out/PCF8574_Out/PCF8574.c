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

void send_data_PCF8574(unsigned char data){
	I2C_Init();
	I2C_Start();
	I2C_Send_Data(I2C_PCF_ADDRESS_WITH_WRITE);
	I2C_Send_Data(data);
	I2C_Stop();
}

