#include "main.h"
//----------------------------------------
char buffer[512]="The selection of RAM is set by the previous address set instruction. If the address set instruction of RAM is not performed before this instruction, the data that has been read first is invalid, as the direction of AC is not yet determined. If RAM data is read several times without RAM address instructions set before, read operation, the correct RAM data can be obtained from the second. But the first data would be incorrect, as there is no time margin to transfer RAM data. In case of DDRAM read operation...";//буфер данных для вывода
//----------------------------------------
void port_ini(void)
{
	PORTD=0x00;
	DDRD=0xFF;
}
//----------------------------------------
int main(void)
{
	unsigned int i;
	port_ini(); //инициализируем порты
	LCD_ini();  //инициализируем дисплей
	clearlcd();//очистим дисплей
	setpos(0,0);
	str_lcd("String 1");
	setpos(2,1);
	str_lcd("String 2");
	setpos(4,2);
	str_lcd("String 3");
	setpos(6,3);
	str_lcd("String 4");
	_delay_ms(2000);
//  	str80_lcd(buffer);
//  	_delay_ms(1000);
//  	str80_lcd(buffer+20);
//  	_delay_ms(1000);
//  	str80_lcd(buffer+40);
//for (i=0;i<=22;i++)	{str80_lcd(buffer+i*20);_delay_ms(1000);}
	for (i=0;i<=432;i++)	{str80_lcd(buffer+i);_delay_ms(100);}
    while(1)
    {
    }
}