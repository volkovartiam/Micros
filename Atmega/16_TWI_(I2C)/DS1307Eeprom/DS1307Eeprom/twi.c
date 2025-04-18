﻿#include "twi.h"

void I2C_Init(void)
{
	TWBR=0x20; //скорость передачи (при 8 мГц получается 100 кГц)
}

void I2C_StartCondition(void)
{
	TWCR = (1<<TWINT)|(1<<TWSTA)|(1<<TWEN);
	while(!(TWCR&(1<<TWINT)));//подождем пока установится TWIN
}

void I2C_StopCondition(void)
{
	TWCR = (1<<TWINT)|(1<<TWSTO)|(1<<TWEN);
}

void I2C_SendByte(unsigned char c)
{
	TWDR=c;//запишем байт в регистр данных
	TWCR = (1<<TWINT)|(1<<TWEN);//включим передачу данных
	while(!(TWCR&(1<<TWINT)));//подождем пока установится TWIN	
}

