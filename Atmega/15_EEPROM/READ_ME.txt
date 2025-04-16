

ERASE_ONLY
Данные до операции 
:10000000101172FFFFFFFFFFFFFFFFFFFFFFFFFF6A
Данные после операции 
:10000000FFFF72FFFFFFFFFFFFFFFFFFFFFFFFFF8D
Данные затерлись

WRITE_ONLY
Данные до операции
:10000000FFFF72FFFFFFFFFFFFFFFFFFFFFFFFFF8D
Данные после операции 
:10000000101172FFFFFFFFFFFFFFFFFFFFFFFFFF6A


// EEPM - EEPROM Programming Mode Bits
#define ERASE_ONLY (0<<EEPM1)|(1<<EEPM0)
#define WRITE_ONLY (1<<EEPM1)|(0<<EEPM0)
#define ERASE_AND_WRITE (0<<EEPM1)|(0<<EEPM0)
#define PROGRAMMING_MODE WRITE_ONLY;


Фрагмент кода
void EE_write(unsigned int uiAddress, unsigned char ucData)
{
	/* Wait for completion of previous write */
	while(EECR & (1<<EEPE))
	{}					//ждем освобождения флага окончания последней операцией с памятью
	EEAR = uiAddress;	//Устанавливаем адрес
	EEDR = ucData;		//Пищем данные в регистр
	
	EECR |= PROGRAMMING_MODE;
	EECR |= (1<<EEMPE); //Разрешаем запись
	EECR |= (1<<EEPE);	//Пишем байт в память

}


int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		/*
		EEPROM_write(1, 0x71);
		EEPROM_write(0, 0x70);
		EEPROM_write(2, 0x72);
		*/
		EE_write(1, 0x11);
		EE_write(0, 0x10);
		//EE_write(2, 0x02);
		
    }
}

