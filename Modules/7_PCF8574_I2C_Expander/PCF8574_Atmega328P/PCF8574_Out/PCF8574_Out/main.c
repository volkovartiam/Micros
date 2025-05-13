/*
 * PCF8574_Out.c
 *
 * Created: 13.05.2025 8:14:03
 * Author : 589
 */ 

#include "main.h"

/*
#define I2C_PCF_ADDRESS (0x20 << 1)
#define READ (1 << 1)
#define WRITE (0 << 1)
#define I2C_PCF_ADDRESS_WITH_READ I2C_PCF_ADDRESS|READ
#define I2C_PCF_ADDRESS_WITH_WRITE I2C_PCF_ADDRESS|WRITE
*/

int main(void)
{
	/*
	I2C_Init();
	I2C_Start();
	I2C_Send_Data(I2C_PCF_ADDRESS_WITH_WRITE);
	I2C_Send_Data(0b11110011);
	_delay_ms(1000);
	I2C_Send_Data(0b00001111);
	I2C_Stop();
	_delay_ms(1000);
	*/	
		
	//setAddressPCF8574();
	send_data_PCF8574(0b01010101);
	
    while(1)
    {
		/*
		for(int i = 0; i<0xFF; i++){
			I2C_Init();
			I2C_Start();
			I2C_Send_Data(I2C_PCF_ADDRESS_WITH_WRITE);
			I2C_Send_Data(i);
			I2C_Stop();
			_delay_ms(100);
		}
		*/
    }
	
}

