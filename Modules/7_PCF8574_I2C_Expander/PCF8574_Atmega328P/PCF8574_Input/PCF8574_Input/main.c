/*
 * PCF8574_Input.c
 *
 * Created: 16.05.2025 8:36:09
 * Author : 589
 */ 

#include <inttypes.h>
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

//General Master staus codes
#define START       0x08    //START has been transmitted
#define REP_START   0x10
#define MT_DATA_ACK 0x28
#define MT_SLA_ACK  0x18

//Master Transmitter staus codes
#define MT_ADR_ACK  0x18    //SLA+W has been tramsmitted and ACK received
#define MT_ADR_NACK 0x20    //SLA+W has been tramsmitted and NACK received

#define MT_DATA_ACK 0x28    //Data byte has been tramsmitted and ACK received
#define MT_DATA_NACK 0x30   //Data byte has been tramsmitted and NACK received
#define MT_ARB_LOST 0x38    //Arbitration lost in SLA+W or data bytes

#define WRITE       0x00
#define READ        0x01

#define READ_END    0x01
#define READ_NOEND  0x00

#define ERROR       0x01
#define SUCCESS     0x00

#define READ_END    0x01
#define READ_NOEND  0x00

#define I2C_ADR_PCF8574 0x20

static int uart_putchar(char c, FILE *stream);
static uint8_t send_i2c(uint8_t value);
static uint8_t start_i2c(uint8_t d_adr);
static inline void stop_i2c();
static uint8_t get_i2c(uint8_t END);
static uint8_t write_i2c(uint8_t ADR, uint8_t value);
static uint8_t read_i2c(uint8_t ADR);

static FILE mystdout = FDEV_SETUP_STREAM(uart_putchar, NULL, _FDEV_SETUP_WRITE);

int main()
{
	// GPIO setup

	// UART setup
	UBRR0H=0; UBRR0L=12;				// 9600, 2MHz
	UCSR0B=(1<<TXEN0);
	UCSR0C=(1<<UMSEL00)|(3<<UCSZ00);	// 8n1
	stdout = &mystdout;
	
	// I2C setup
	TWBR = (F_CPU /100000UL - 16)/2; // TWI bitrate
	// main loop
	for(;;)
	{
		printf("start session... \n");
		write_i2c((I2C_ADR_PCF8574<<1), 0xff); // setup to read
		uint8_t data;
		for(;;)
		{
			data=read_i2c(I2C_ADR_PCF8574<<1);
			printf("data is: %x\n",data);
			_delay_ms(1000);
		}
	};
	return 0;
}

static int uart_putchar(char c, FILE *stream)
{
	if (c == '\n')
	uart_putchar('\r', stream);
	loop_until_bit_is_set(UCSR0A, UDRE0);
	UDR0 = c;
	return 0;
}

static uint8_t write_i2c(uint8_t ADR, uint8_t value) {
	uint8_t ret;
	if (start_i2c(ADR) != ERROR)
	{
		ret=send_i2c(value);
		stop_i2c();
		} else {
		stop_i2c();
		ret=ERROR;
	}
	return ret;
}

static uint8_t read_i2c(uint8_t ADR) {
	uint8_t ret;
	start_i2c(ADR|READ);
	ret=get_i2c(READ_END);
	stop_i2c();

	return ret;
}
uint8_t send_i2c(uint8_t value)
{
	TWDR = value;
	TWCR = (1<<TWINT) | (1<<TWEN);
	// wail until transmission completed and ACK/NACK has been received
	while(!(TWCR & (1<<TWINT))) {};
	// check value of TWI Status Register. Mask prescaler bits.

	value = TWSR & 0xF8;
	return (value == MT_SLA_ACK || value == MT_DATA_ACK) ? SUCCESS : ERROR;
}

static uint8_t start_i2c(uint8_t d_adr)
{
	TWCR=(1<<TWINT) | (1<<TWSTA) | (1<<TWEN); // START
	while (!(TWCR & (1<<TWINT))) {};

	uint8_t twst; twst = (TWSR & 0xF8); // check value of TWI Status Register. Mask prescaler bits.
	if ((twst != START) && (twst != REP_START))
	return ERROR;
	return send_i2c(d_adr);
};

static inline void stop_i2c()
{
	TWCR=(1<<TWINT) | (1<<TWEN) | (1<<TWSTO);
}

static uint8_t get_i2c(uint8_t END)
{
	if (END)
	TWCR = (1<<TWINT)|(1<<TWEN);
	else
	TWCR = (1<<TWINT)|(1<<TWEN)|(1<<TWEA);

	while(!(TWCR & (1<<TWINT)));

	return TWDR; // return data
}