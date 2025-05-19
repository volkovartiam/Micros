/*
 * PCF8574_Out.c
 *
 * Created: 13.05.2025 8:14:03
 * Author : 589
 */ 

#include "main.h"

int main(void)
{
	uint32_t delay = 2500; 

    while(1)
    {
			
		unsigned char data = get_input_PCF8574();
		USART_Transmit(data);
		_delay_ms(delay);	
			
			
		/*	
		I2C_Init();
		I2C_Start();
		I2C_Send_Data(I2C_PCF_ADDRESS_WITH_READ);
		unsigned char data = I2C_Read_Data(1);
		//unsigned char data = I2C_Read_Data(1);
		I2C_Stop();
		USART_Transmit(data);
		_delay_ms(delay);
		*/
		
		/*
		set_output_PCF8574(0b01010101);
		_delay_ms(delay);
		set_output_PCF8574(0b01010101 << 1);
		_delay_ms(delay);
		*/
	}	
	
		/*
		Программа подвисала сброс питания помог
		F8 08 40 55 F8 F8 
		*/
		/*
		Для работы с входами и выходами требуется подключение INT
		*/
	
}

