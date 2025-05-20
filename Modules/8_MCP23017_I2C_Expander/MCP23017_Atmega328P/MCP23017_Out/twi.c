#include "twi.h"


void I2C_Init(void)
{
	TWBR = BIT_RATE;
	init_telemetry();
	send_telemetry(I2C_STATUS);
}


void I2C_Start(void)
{
	TWCR = TWI_Interrupt_Flag|TWI_START_Condition|TWI_Enable;
	while(WAIT_UNTIL_TWINT_SET){}
	send_telemetry(I2C_STATUS);
}


void I2C_Stop(void)
{
	TWCR = TWI_Interrupt_Flag|TWI_STOP_Condition|TWI_Enable;
	send_telemetry(I2C_STATUS);
}


void I2C_Send_Data(unsigned char data)
{
	TWDR = data;					
	TWCR = TWI_Interrupt_Flag|TWI_Enable;
	while(WAIT_UNTIL_TWINT_SET){}
	send_telemetry(I2C_STATUS);
}


char err1=0;// сюда вернем ошибку
#define TW_MR_DATA_ASK 0x50 // Ведущий принял данные и передал подтверждение

unsigned char I2C_Read_Data(uint8_t END)
{
	/**/
	if(END == 1){
		TWCR = (1<<TWINT)|(1<<TWEN);
	} else{
		TWCR = TWI_Interrupt_Flag|TWI_Enable|TWI_Enable_Acknowledge;
	}
	while(WAIT_UNTIL_TWINT_SET){}		
	send_telemetry(TWDR);							
	return TWDR;
	/**/
	
	/*
	err1=0;
	TWCR = (1<<TWINT)|(1<<TWEN)|(1<<TWEA);//включим прием данных
	while(!(TWCR & (1<<TWINT)));//подождем пока установится TWIN
	if ((TWSR & 0xF8) != TW_MR_DATA_ASK)  err1=1;
	else err1=0;
	return TWDR;
	*/	
}


void init_telemetry()
{
	USART_Init();
}

void send_telemetry(uint8_t data)
{
	USART_Transmit(data);
}


