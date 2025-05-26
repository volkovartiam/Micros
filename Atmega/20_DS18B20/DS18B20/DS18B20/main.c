/*
 * DS18B20.c
 *
 * Created: 12.04.2025 19:06:44
 * Author : Artem
 */ 

#include "main.h"

unsigned char sec,min,hour,day,date,month,year;

void port_ini(void)
{
	PORTD=0x00;
	//DDRD=0xFF;
	DDRD=0b11111100;
	
	PORTB=0x00;
	DDRB=0b11111110;
	//DDRTEMP |= 1<<0;
}

int main(void)
{

	unsigned int tt=0; //переменная для хранения температуры
	/*

	I2C_Init(); //Инициализируем шину I2C
	LCD_ini();  //Инициализируем дисплей
	clearlcd(); //Очистим дисплей
	*/
	USART_Init();
	port_ini(); //Инициализируем порты

	char LocalData;
	
	//Устанавливаем время
	// 	I2C_StartCondition();
	// 	I2C_SendByte(0b11010000);
	// 	I2C_SendByte(0);//Переходим на 0x00
	// 	I2C_SendByte(RTC_ConvertFromBinDec(0)); //секунды
	// 	I2C_SendByte(RTC_ConvertFromBinDec(31)); //минуты
	// 	I2C_SendByte(RTC_ConvertFromBinDec(20)); //часы
	// 	I2C_SendByte(RTC_ConvertFromBinDec(5)); //день недели
	// 	I2C_SendByte(RTC_ConvertFromBinDec(29)); //дата
	// 	I2C_SendByte(RTC_ConvertFromBinDec(1)); //месяц
	// 	I2C_SendByte(RTC_ConvertFromBinDec(16)); //год
	//	I2C_StopCondition();

	while(1)
	{
		/*
		//Читаем времени
		I2C_SendByteByADDR(0,0b11010000);	//переходим на адрес 0
		_delay_ms(200);
		I2C_StartCondition(); //Отправим условие START
		I2C_SendByte(0b11010001); //отправим в устройство бит чтения
		sec = I2C_ReadByte();
		min = I2C_ReadByte();
		hour = I2C_ReadByte();
		day = I2C_ReadByte();
		date = I2C_ReadByte();
		month = I2C_ReadByte();
		year = I2C_ReadLastByte();
		I2C_StopCondition(); //Отправим условие STOP
		sec = RTC_ConvertFromDec(sec); //Преобразуем в десятичный формат
		min = RTC_ConvertFromDec(min); //Преобразуем в десятичный формат
		hour = RTC_ConvertFromDec(hour); //Преобразуем в десятичный формат
		day = RTC_ConvertFromDec(day); //Преобразуем в десятичный формат
		year = RTC_ConvertFromDec(year); //Преобразуем в десятичный формат
		month = RTC_ConvertFromDec(month); //Преобразуем в десятичный формат
		date = RTC_ConvertFromDec(date); //Преобразуем в десятичный формат
		setpos(0,0); //Ставим курсор на начало координат
		sendcharlcd(date/10+0x30);//Преобразуем число в код числа
		sendcharlcd(date%10+0x30);//Преобразуем число в код числа
		sendcharlcd('.');
		sendcharlcd(month/10+0x30);//Преобразуем число в код числа
		sendcharlcd(month%10+0x30);//Преобразуем число в код числа
		sendcharlcd('.');
		sendcharlcd('2');
		sendcharlcd('0');
		sendcharlcd(year/10+0x30);//Преобразуем число в код числа
		sendcharlcd(year%10+0x30);//Преобразуем число в код числа
		sendcharlcd(' ');
		sendcharlcd('-');
		sendcharlcd(day+0x30);//Преобразуем число в код числа
		sendcharlcd('-');
		setpos(0,1); //Ставим курсор на начало координат
		sendcharlcd(hour/10+0x30);//Преобразуем число в код числа
		sendcharlcd(hour%10+0x30);//Преобразуем число в код числа
		sendcharlcd(':');
		sendcharlcd(min/10+0x30);//Преобразуем число в код числа
		sendcharlcd(min%10+0x30);//Преобразуем число в код числа
		sendcharlcd(':');
		sendcharlcd(sec/10+0x30);//Преобразуем число в код числа
		sendcharlcd(sec%10+0x30);//Преобразуем число в код числа
		sendcharlcd(' ');
		tt = converttemp(dt_check()); //измеряем температуру
		sendcharlcd(tt/10+0x30);//Преобразуем число в код числа
		sendcharlcd(tt%10+0x30);//Преобразуем число в код числа
		sendcharlcd('*');
		sendcharlcd('C');
		
		//LocalData = USART_ReceivePolling();
		//USART_Transmit(LocalData);
		
		tt = converttemp(dt_check()); //измеряем температуру
		USART_Transmit(tt/10);
		USART_Transmit(tt%10);
		_delay_ms(200);
		*/
		
		/*
		char test = dt_testdevice();	
		if(test == 1){
			USART_Transmit('O');
			USART_Transmit('K');
			USART_Transmit(0x0d);	//переход в начало строки
			USART_Transmit(0x0a);	//переход на новую строку
		} else {
			USART_Transmit('N');
			USART_Transmit('O');
			USART_Transmit(0x0d);	//переход в начало строки
			USART_Transmit(0x0a);	//переход на новую строку	
		}
		*/
		
		unsigned int tt = dt_check();
		unsigned int tt_temporary = tt;
		USART_Transmit(tt_temporary>>8);
		USART_Transmit(tt);
		
		_delay_ms(500);
		
	}
}

