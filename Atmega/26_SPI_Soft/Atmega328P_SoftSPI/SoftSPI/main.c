/*
 * SoftSPI.c
 *
 * Created: 27.05.2025 13:57:55
 * Author : 589
 */ 

#include "main.h"

#define SPI_PORT PORTB
#define SPI_DDR DDRB
#define SPI_PIN PINB	
	
#define CS_pin 0
#define SCK_pin 1
#define MOSI_pin 2
#define MISO_pin 3

#define CS (1<<CS_pin) 
#define SCK (1<<SCK_pin)
#define MOSI (1<<MOSI_pin)
#define MISO (1<<MISO_pin)

#define HIGH(X) SPI_PORT |= X
#define LOW(X) SPI_PORT &= !X

#define SPI_time 1


void SPI_write(char byte) {
	for (char i=0; i<8; i++) {		// цикл на 8 бит
		_delay_us(SPI_time/2);		// формируем половину паузы
		if (byte & (1<<7) ) {		// проверяется старший байт
			HIGH(MOSI);
		} 
		else {
			LOW(MOSI);
		}	
		byte<<=1;                   // двигаем байт
		_delay_us(SPI_time/2);		// завершаем паузу
		HIGH(SCK);
		_delay_us(SPI_time);		// формируем импульс
		LOW(SCK);
	}
}


unsigned char SPI_read() {
	char byte=0;					// переменные для счетчика и байта
	for (char i=0; i<8; i++) {		
		_delay_us(SPI_time);		// формируем паузу
		HIGH(SCK);
		_delay_us(SPI_time/2);		// половина импульса
		if (SPI_PIN & MISO){
			byte++;					// читаем бит и записываем его
		}
		if (i!=7) {
			byte<<=1;				// двигаем байт
		}
		_delay_us(SPI_time/2);		// завершаем импульс
		LOW(SCK);
	}
	return byte;					// вернули, что прочли
}


void SPI_start() {
	_delay_us(SPI_time);
	LOW(SCK);
	LOW(CS);
	_delay_us(SPI_time);
}


void SPI_stop() {
	_delay_us(SPI_time);
	HIGH(CS);
	_delay_us(SPI_time);
}


int main(void)
{
	/**/
	DDRB |= (1<<PORTB5);		// для тестовой лампочки
	PORTB |= (1 << PORTB5);
	_delay_ms(100);				// ждем устаканивания питания
	PORTB &= !(1 << PORTB5);	
	_delay_ms(100);	
	
	
	SPI_PIN |= (1<<MISO_pin);
	SPI_DDR &= ~(1<<MISO_pin);
	SPI_DDR |= CS|MOSI|SCK;
	SPI_PORT |= CS|MOSI|SCK;
		
	USART_Init(BAUD_9600);

		
	while(1) {
		 
		 for(int i = 0; i < 255; i++){
			SPI_start();		
			SPI_write(i);
			SPI_stop();
			_delay_ms(100);
		 }

		 char x = SPI_read();
		 USART_Transmit(x);
		 _delay_ms(100);
		 /*
		 USART_Transmit('O');
		 USART_Transmit('K');
		 */
	 }
	 
}

