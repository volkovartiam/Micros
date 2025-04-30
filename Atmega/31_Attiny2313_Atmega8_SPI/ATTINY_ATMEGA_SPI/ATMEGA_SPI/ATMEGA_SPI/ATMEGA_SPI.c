#include "main.h"
//----------------------------------------
char str[10];
//----------------------------------------
void port_ini(void)
{
	PORTD=0x00;
	DDRD=0xFF;
}
//----------------------------------------
void SPI_init_SL(void)
{
	DDRB |= (1<<PORTB4);//ножки SPI на выход
	DDRB &= ~((1<<PORTB2)|(1<<PORTB3)|(1<<PORTB5));//ножки SPI на вход
	SPCR = ((1<<SPE)|(1<<SPIE));//включим шину, включим прерывания
}
//----------------------------------------
ISR(SPI_STC_vect)//прерывание SPI прием байта
{
	unsigned char n;
	n = SPDR;
	clearlcd();//очистим дисплей
	setpos(0,0);
	itoa(n,str,10);
	str_lcd(str);
	SPDR = n;
}
//----------------------------------------
int main(void)
{
	port_ini(); //»нициализируем порты
	LCD_ini();  //»нициализируем дисплей
	SPI_init_SL();//инициализируем SPI
	sei();
	clearlcd();//очистим дисплей
	setpos(0,0);
	str_lcd("Hello World!");
	setpos(2,1);
	str_lcd("String 2");
	setpos(4,2);
	str_lcd("String 3");
	setpos(6,3);
	str_lcd("String 4");
	while(1)
	{
	}
}