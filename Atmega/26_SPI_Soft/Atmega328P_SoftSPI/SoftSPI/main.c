/*
 * SoftSPI.c
 *
 * Created: 27.05.2025 13:57:55
 * Author : 589
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

// #include <uart.h>

/*
#define spi_cs PORTB0 //.0						// это D8  ардуино
#define DDR_spi_cs  DDRB |= 0b00000001			//DDRB0

#define spi_do      PINB1						// это D9  ардуино
#define DDR_spi_do  DDRB |= 0b00000010
#define spi_di      PORTB2						// это D10 ардуино
#define DDR_spi_di  DDRB |= 0b00000100
#define spi_clk     PORTB3						// это D11 ардуино
#define DDR_spi_clk DDRB |= 0b00001000

#define SPI_time 10
*/

#define SPI_PORT PORTD
#define SPI_PORT_DDR DDRD		
#define spi_cs_pin 4
#define spi_do_pin 5
#define spi_di_pin 6
#define spi_clk_pin 7


#define DDR_spi_cs (1<<spi_cs_pin)
#define spi_cs (1<<spi_cs_pin) 

#define DDR_spi_do (1<<spi_do_pin)
#define spi_do (1<<spi_do_pin)						

#define DDR_spi_di (1<<spi_di_pin)
#define spi_di (1<<spi_di_pin)

#define DDR_spi_clk (1<<spi_clk_pin)
#define spi_clk (1<<spi_clk_pin)


#define SPI_time 1

// пишем байт в шину
void SPI_wr(char byte) {
	char i;							// счетчик для цикла
	for (i=0; i<8; i++) {			// цикл на 8 бит
		_delay_us(SPI_time/2);		// формируем половину паузы
		if (byte & 0x80) {
			//spi_di=1;				// выставляем один бит
			SPI_PORT |= spi_di;
		} 
		else {
			//spi_di=0;
			SPI_PORT &= !spi_di;
		}	
		byte<<=1;                   // двигаем байт
		_delay_us(SPI_time/2);		// завершаем паузу
		//spi_clk = 1;				// тактовый фронт
		SPI_PORT |= spi_clk;
		_delay_us(SPI_time);		// формируем импульс
		//spi_clk = 0;				// тактовый спад
		SPI_PORT &= !spi_clk;
	}
}


/*
// читаем байт из шины
unsigned char SPI_rd() {
	char i, byte=0;				// переменные для счетчика и байта
	for (i=0; i<8; i++) {		// цикл на 8 бит
		_delay_us(SPI_time);	// формируем паузу
		spi_clk = 1;			// формируем фронт
		_delay_us(SPI_time/2);	// половина импульса
		if (spi_do) byte++;		// читаем бит и записываем его
		if (i!=7) byte<<=1;		// двигаем байт
		_delay_us(SPI_time/2);	// завершаем импульс
		spi_clk = 0;
	}
	return byte;            // вернули, что прочли
}
*/
// начинаем общение
void spi_go() {
	_delay_us(SPI_time);
	//spi_clk=0;
	//spi_cs =0;
	SPI_PORT &= !spi_clk;
	SPI_PORT &= !spi_cs;
	_delay_us(SPI_time);
}
/*
SPI_PORT |= spi_clk;
SPI_PORT &= !spi_clk;
*/
// заканчиваем общение
void spi_end() {
	_delay_us(SPI_time);
	//spi_cs = 1;
	SPI_PORT |= spi_cs;
	_delay_us(SPI_time);
}



int main(void)
{
	/**/
	DDRB |= (1<<PORTB5);		// для тестовой лампочки
	PORTB |= (1 << PORTB5);
	_delay_ms(100);				// ждем устаканивания питания
	PORTB &= !(1 << PORTB5);	

	
	SPI_PORT_DDR |= DDR_spi_cs|DDR_spi_do|DDR_spi_di|DDR_spi_clk;
	SPI_PORT |= spi_cs|spi_do|spi_di|spi_clk;
	
	

	
	
	/*
	DDRB = 0xFF;
	PORTB = 0xFF;
	/*
	DDRB = 0x0b00100000;
	PORTB = 0x0b00100000;
	/**/
	/*
	// инициализация линий.....
	DDR_spi_clk = 1;	// на выход
	DDR_spi_do  = 0;	// на вход
	DDR_spi_di  = 1;	// на выход
	DDR_spi_cs  = 1;	// на выход
	spi_cs=1;			// задираем cs
	_delay_us(100);		// ждем устаканивания питания
	*/
	
	 while(1) {
		 /*
		 char t=0;
		 _delay_us(100); // ждем немного
		 PORTB.5=0; // гасим тестовую лампочку
		 // читаем ID микросхемы памяти
		 */
		 spi_go();		//SPI_wr(0x90); SPI_wr(0x00); SPI_wr(0x00); SPI_wr(0x00);
		 SPI_wr(0x01);
		 spi_end();
		 /*
		 if (SPI_rd()==0xC2) t++; // сразу сравниваем с нужным
		 if (SPI_rd()==0x13) t++; // сразу сравниваем с нужным
		 spi_end();
		 if (t==2) PORTB.5=1;  // включаем тестовую лампочку
		 */
		 
		 for(int i = 0; i < 255; i++){
			spi_go();		//SPI_wr(0x90); SPI_wr(0x00); SPI_wr(0x00); SPI_wr(0x00);
			SPI_wr(i);
			spi_end();
			_delay_ms(100);
		 }
		 
		 
	 }
	 
}

