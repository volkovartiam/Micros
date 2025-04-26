#include "lcd.h"

#define RS_PORT PORTB
#define RS_PIN PORTB0
#define rs1  RS_PORT|=(1<<RS_PIN)
#define rs0  RS_PORT &= ~(1<<RS_PIN)

/*
#define E_PORT PORTB
#define E_PIN PORTB1
#define e1  RS_PORT|=(1<<E_PIN)
#define e0  RS_PORT &= ~(1<<E_PIN)
*/

#define e1 PORTB|=0b00000010 // установка линии E в 1
#define e0 PORTB&=0b11111101 // установка линии E в 0

#define DB_PORT PORTD
#define DB_PORT_CLEAR DB_PORT &= 0b00001111
#define DB7_DB4_INIT 0b0011

#define COMMAND_MODE 0
#define DATA_MODE 1

#define NO_DELAY 0
#define DELAY_1_ms 1





void LCD_init(void)
{
	rs0; 
	_delay_ms(15);						// wait time > 15 ms  
	send_half_byte(DB7_DB4_INIT); 		
	_delay_ms(4.1);						// wait time > 4.1 ms 
	send_half_byte(DB7_DB4_INIT);
	_delay_us(100);						// wait time > 100 us  
	send_half_byte(DB7_DB4_INIT);

	send_half_byte_with_delay(0b0010);				// page 14
	send_half_byte_with_delay(0b0010);				// page 14
	send_byte_with_delay(0b00001100, COMMAND_MODE);	// Set display (D) cursor(C) and blinking of cursor(B) on/off	(datasheet page 9)
	send_byte_with_delay(0b00000110, COMMAND_MODE);	// Assign cursor moving direction and enable the shift of entire display
	
	send_byte_with_delay(0b10000000, COMMAND_MODE);	// Clear Display
}


void send_half_byte(uint8_t data_DB)
{
	data_DB<<=4;
	e1;	
	_delay_us(50);					
	DB_PORT_CLEAR;		
	DB_PORT |= data_DB;
	e0;	
	_delay_us(50);	
}


void send_half_byte_with_delay(uint8_t data_DB)
{
	send_half_byte(data_DB);
	_delay_ms(1);	
}

void send_byte_with_delay(uint8_t data_DB, uint8_t mode)
{
	if(mode==COMMAND_MODE){
		rs0;
	}
	else{
		rs1;
	}       
	uint8_t temp=0;
	temp=data_DB>>4;
	send_half_byte_with_delay(temp); 
	send_half_byte_with_delay(data_DB);
}


void send_char(char c)
{
	send_byte_with_delay(c, DATA_MODE);
}


/*
void setpos(unsigned char x, unsigned y)
{
	char adress;
	adress=(0x40*y+x)|0b10000000;
	send_byte_with_delay(adress, 0);
}
*/


void clearlcd()
{
	send_byte_with_delay(0b10000000, COMMAND_MODE);	// Clear Display
	_delay_us(2000);
}


void str_lcd(char string[])
{  
	for(char n=0; string[n] != '\0'; n++){
		send_char(string[n]);
	}
}


