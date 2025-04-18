#include "twi.h"


// TWSR
// TWS - задает статус шины (коды для разных случаев)
// TWPS - задает деление частоты (prescaler)
#define F_SCL 100000UL								// 100 кГц
#define PRESCALER_VAL_1 (0<<TWPS1)|(0<<TWPS0)		//
#define PRESCALER_VAL_4 (0<<TWPS1)|(1<<TWPS0)		//
#define PRESCALER_VAL_16 (1<<TWPS1)|(0<<TWPS0)		//
#define PRESCALER_VAL_64 (1<<TWPS1)|(1<<TWPS0)		//
#define PRESCALER PRESCALER_VAL_16

// TWBR - регистр задает скорость передачи (BIT_RATE) для расчета необходимо знать тактовую частоту
// и желаемую частоту шины TWI и значение делителя частоты (prescaler)
#define BIT_RATE (((F_CPU/F_SCL)-16)/(2*4^PRESCALER))
//unsigned char calculated_bit_rate_value = (((F_CPU/F_SCL)-16)/(2*4^PRESCALER));

//TWAR 
//TWA - Slave adress
//TWGCE - General call recognition enable (бит разрешения общего вызова)

//TWDR - data register (хранит данные для передачи)

//TWCR - control register
//TWINT - TWI Interrupt Flag (флаг прерываний)
//TWEA TWI Enable Acknowledge (разрешение генерации ACK)
//TWSTA TWI START Condition (отправка старт)
//TWSTO TWI STOP Condition (отправка стоп)
//TWWC TWI Write Collision Flag (записать флаг коллизии)
//TWEN TWI Enable (Разрешение работы шины TWI)
//TWIE TWI Interrupt Enable (разрешить TWI прерывания)

//TWAMR - TWI (Slave) Address Mask Register 
//https://github.com/alexisgaziello/TwoWireSimulator?ysclid=m9mo9a9en8128752120


void I2C_Init(void)
{
	TWBR=0x20;			//скорость передачи (при 8 мГц получается 100 кГц)
	TWBR = BIT_RATE;
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

