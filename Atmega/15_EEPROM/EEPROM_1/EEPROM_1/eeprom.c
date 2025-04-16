/*
 * eeprom.c
 *
 * Created: 07.04.2025 12:54:11
 *  Author: 589
 */ 

#include "eeprom.h"

// EEPM - EEPROM Programming Mode Bits
#define ERASE_ONLY (0<<EEPM1)|(1<<EEPM0)
#define WRITE_ONLY (1<<EEPM1)|(0<<EEPM0)
#define ERASE_AND_WRITE (0<<EEPM1)|(0<<EEPM0)
#define PROGRAMMING_MODE ERASE_AND_WRITE

#define READY_INTERRUPT (1<<EERI)

#define MASTER_WRITE_ENABLE (1<<EEMPE)
#define MASTER_WRITE_DISABLE (0<<EEMPE)

#define WRITE_ENABLE (1<<EEPE)
#define WRITE_DISABLE (0<<EEPE)

#define READ_ENABLE (1<<EERE)
#define READ_DISABLE (0<<EERE)

#define WAIT_COMPLETION_WRITE (EECR & (1<<EEPE) )


void EE_write_data_by_address(unsigned char ucData, unsigned int uiAddress)
{
	while(WAIT_COMPLETION_WRITE){}	/* Wait for completion of previous write */	
	
	EEDR = ucData;
	EEAR = uiAddress;
	/*
	Фрагмент кода не работает
	EECR |= (PROGRAMMING_MODE|MASTER_WRITE_ENABLE|WRITE_ENABLE);
	*/
	
	/**/
	EECR |=  PROGRAMMING_MODE;	
	EECR |=  MASTER_WRITE_ENABLE;
	EECR |=  WRITE_ENABLE;
	/**/
}


void EE_erase_by_address(unsigned int uiAddress)
{
	while(WAIT_COMPLETION_WRITE){}	/* Wait for completion of previous write */
	
	//EEDR = 0x00;
	EEAR = uiAddress;
	
	EECR |=  ERASE_ONLY;
	EECR |=  MASTER_WRITE_ENABLE;
	EECR |=  WRITE_ENABLE;

}






void EEPROM_write(unsigned int uiAddress, unsigned char ucData)
{
	/* Wait for completion of previous write */
	while(EECR & (1<<EEPE)) 
	{}					//ждем освобождения флага окончания последней операцией с памятью
	EEAR = uiAddress;	//Устанавливаем адрес
	EEDR = ucData;		//Пищем данные в регистр
	EECR |= (1<<EEMPE); //Разрешаем запись
	EECR |= (1<<EEPE);	//Пишем байт в память
}

unsigned char EEPROM_read(unsigned int uiAddress)
{
	while(EECR & (1<<EEPE))
	{}					//ждем освобождения флага окончания последней операцией с памятью
	EEAR = uiAddress;	//Устанавливаем адрес
	EECR |= (1<<EERE);	//Запускаем операцию считывания из памяти в регистр данных
	return EEDR;		//Возвращаем результат
}


/*
void EEPROM_write_word(unsigned int uiAddress, uint16_t ucData)
{
	EEPROM_write(uiAddress, (unsigned char) ucData);
	unsigned char dt = ucData>>8;
	EEPROM_write(uiAddress+1, dt);
}

uint16_t EEPROM_read_word(unsigned int uiAddress)
{
	uint16_t dt = EEPROM_read(uiAddress+1)*256;
	asm("nop");
	dt += EEPROM_read(uiAddress);
	return dt;
}

void EEPROM_write_dword(unsigned int uiAddress, uint32_t ucData)
{
	EEPROM_write_word(uiAddress, (uint16_t) ucData);
	uint16_t dt = ucData>>16;
	EEPROM_write_word(uiAddress+2, dt);
}

uint32_t EEPROM_read_dword(unsigned int uiAddress)
{
	uint32_t dt = EEPROM_read_word(uiAddress+2)*65536;
	asm("nop");
	dt += EEPROM_read_word(uiAddress);
	return dt;
}

void EEPROM_write_string(unsigned int uiAddress, char str1[])
{
	wchar_t n;
	for(n=0;str1[n]!='\0';n++)
	EEPROM_write(uiAddress+n,str1[n]);
}

const char* EEPROM_read_string(unsigned int uiAddress, unsigned int sz)
{
	unsigned int i;
	char* str1;
	str1 = (char *) realloc(NULL,sz);
	for (i=0;i<sz;i++)
	str1[i] = EEPROM_read(uiAddress+i);
	return str1;
}
*/