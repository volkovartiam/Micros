#ifndef EEPROMEXT_H_
#define EEPROMEXT_H_

/*
#include "main.h"

#define TW_MT_DATA_ASK 0x28 // Ведущий передал данные и ведомый подтвердил прием
#define TW_MR_DATA_ASK 0x50 // Ведущий принял данные и передал подтверждение
#define TW_MR_DATA_NASK 0x58 // Ведущий передал данные и ведомый подтвердил прием

int EE_WriteByte(unsigned char c);
unsigned char EE_ReadByte(void);
unsigned char EE_ReadLastByte(void);
*/

#include "main.h"
#include "twi.h"

// I2C_STATUS CODES FROM ATMEGA328P datasheets
#define TWI_DATA_TRANSMITTED_ACK_RECEIVED 0x28		// Data byte has been transmitted; ACK has been received
#define TWI_DATA_RECEIVED_ACK_RETURNED 0x50			// Data byte has been received; ACK has been returned		
#define TWI_DATA_RECEIVED_ACK_NOT_RETURNED 0x58		// Data byte has been received; NOT ACK has been returned
#define NO_RELEVANT_INFO_AVAILABLE 0xF8				// No relevant state information available; TWINT = “0”
							
int EE_Write_Byte_Data(unsigned char data, unsigned char first_address, unsigned char second_address);
unsigned char EE_ReadByte(void);
unsigned char EE_ReadLastByte(void);

unsigned char EE_ReadByte_Data(unsigned char first_address, unsigned char second_address);


#endif /* EEPROMEXT_H_ */