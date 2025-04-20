#include "eepromext.h"

#define I2C_ADDRESS (0x50 << 1)
#define READ (1 << 1)
#define WRITE (0 << 1)
#define I2C_ADDRESS_WITH_READ I2C_ADDRESS|READ
#define I2C_ADDRESS_WITH_WRITE I2C_ADDRESS|WRITE


int EE_Write_Byte_Data(unsigned char data, unsigned char first_address, unsigned char second_address)
{
	int i = 0;
	
	I2C_Init();
	I2C_Start();
	I2C_Send_Data(I2C_ADDRESS_WITH_WRITE);
	I2C_Send_Data(first_address);
	I2C_Send_Data(second_address);
	I2C_Send_Data(data);
	
	if((I2C_STATUS & NO_RELEVANT_INFO_AVAILABLE) != TWI_DATA_TRANSMITTED_ACK_RECEIVED)
	{
		i = 1;
	}
	I2C_Stop();
	return i;
}


unsigned char EE_ReadByte_Data(unsigned char first_address, unsigned char second_address)
{
	I2C_Init();
	I2C_Start();
	I2C_Send_Data(I2C_ADDRESS_WITH_WRITE);
	I2C_Send_Data(first_address);
	I2C_Send_Data(second_address);
	
	I2C_Start();
	I2C_Start();
	I2C_Send_Data(I2C_ADDRESS_WITH_READ);
	unsigned char readed = I2C_Read_Data();
	I2C_Stop();
	return readed;

}






unsigned char EE_ReadByte(void)
{
	
	I2C_Init();
	I2C_Start();
	I2C_Send_Data(I2C_ADDRESS_WITH_READ);
	return I2C_Read_Data();
	
	
	/*
	I2C_Send_Data(first_address);
	I2C_Send_Data(second_address);
	I2C_Send_Data(data);
	*/
	
	
	/*
	err1=0;
	TWCR = (1<<TWINT)|(1<<TWEN)|(1<<TWEA);//включим прием данных
	while(!(TWCR & (1<<TWINT)));//подождем пока установится TWIN
	if ((TWSR & 0xF8) != TW_MR_DATA_ASK)  err1=1;
	else err1=0;
	return TWDR;
	*/
}



















/*
int EE_WriteByte(unsigned char c)
{
	TWDR=c;//запишем байт в регистр данных
	TWCR = (1<<TWINT)|(1<<TWEN);//включим передачу данных
	while(!(TWCR&(1<<TWINT)));//подождем пока установится TWIN
	if ((TWSR & 0xF8) != TW_MT_DATA_ASK)
	{
		return 1;
	}
	return 0;
}
*/




/*
int EE_WriteByte(unsigned char c)
{
	TWDR=c;//запишем байт в регистр данных
	TWCR = (1<<TWINT)|(1<<TWEN);//включим передачу данных
	while(!(TWCR&(1<<TWINT)));//подождем пока установится TWIN
	if ((TWSR & 0xF8) != TW_MT_DATA_ASK)
	{
		return 1;
	}
	return 0;
}

unsigned char EE_ReadByte(void)
{
	err1=0;
	TWCR = (1<<TWINT)|(1<<TWEN)|(1<<TWEA);//включим прием данных
	while(!(TWCR & (1<<TWINT)));//подождем пока установится TWIN
	if ((TWSR & 0xF8) != TW_MR_DATA_ASK)  err1=1;
	else err1=0;
	return TWDR;
}

unsigned char EE_ReadLastByte(void)
{
	TWCR = (1<<TWINT)|(1<<TWEN);//включим прием данных
	while(!(TWCR&(1<<TWINT)));//подождем пока установится TWIN
	if ((TWSR & 0xF8) != TW_MR_DATA_NASK)  err1=1;
	else err1=0;
	return TWDR;
}

*/