#ifndef TWI_H_
#define TWI_H_

#include "main.h"

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

#define TWI_Interrupt_Flag (1<<TWINT)
#define TWI_START_Condition (1<<TWSTA)
#define TWI_STOP_Condition (1<<TWSTO)
#define TWI_Enable (1<<TWEN)
#define TWI_Enable_Acknowledge (1<<TWEA)

#define WAIT_UNTIL_TWINT_SET !(TWCR&(1<<TWINT))

#define I2C_STATUS TWSR

//TWAMR - TWI (Slave) Address Mask Register
//https://github.com/alexisgaziello/TwoWireSimulator?ysclid=m9mo9a9en8128752120


void I2C_Init(void);
void I2C_Start(void);
void I2C_Stop(void);
void I2C_Send_Data(unsigned char data);
unsigned char I2C_Read_Data(uint8_t END);

void send_telemetry(uint8_t data);
void init_telemetry(void);

#endif /* TWI_H_ */