#include "main.h"
//----------------------------------------
void port_ini(void)
{
	PORTD=0x00;
	DDRD=0xFF;
}
//----------------------------------------
void SPI_init(void)
{
	DDRB|=((1<<PORTB4)|(1<<PORTB6)|(1<<PORTB7));//Ножки USI на выход
	DDRB&=~(1<<PORTB5);//Ножка DI на выход
	PORTB&=~((1<<PORTB4)|(1<<PORTB6)|(1<<PORTB7));//Ножки USI в низкий уровень
}
//----------------------------------------
char SPI_ChangeByte(char byte)
{
	USIDR = byte; //данные в регистр
	USISR |= (1<<USIOIF);//установим флаг начала передачи
	while(!(USISR & (1<<USIOIF)))
	{
		USICR |= ((1<<USIWM0)|(1<<USICS1)|(1<<USICLK)|(1<<USITC));//постепенно передаем байт
		_delay_us(10);
	}
	return USIDR;
}
//----------------------------------------
int main(void)
{
	char str[4];
	unsigned char n=0,m=0;//переменная для случайного числа
	port_ini(); //Инициализируем порты
	LCD_ini();  //Инициализируем дисплей
	SPI_init(); //Инициализируем шину
	clearlcd();
	setpos(0,0);
	str_lcd("Hello World!");
	_delay_ms(1000);
	setpos(2,1);
	str_lcd("String 2");
	_delay_ms(1000);
	while(1)
	{
		clearlcd();
		setpos(0,0);
		n= (unsigned char) rand() % 256;
		//n = 0b10101010;
		m = SPI_ChangeByte(n);
		itoa(n,str,10);
		str_lcd(str);
		itoa(m,str,10);
		setpos(0,1);
		str_lcd(str);
		_delay_ms(1000);
	}
}