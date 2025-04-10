#include "main.h"

unsigned char sec,min,hour,day,date,month,year;

int main(void)
{
	I2C_Init();
	USART_Init (8);
	
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
// 	I2C_StopCondition();

    while(1)
    {
		//Читаем время
		I2C_SendByteByADDR(0,0b11010000);	//переходим на адрес 0
		_delay_ms(300);
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
		USART_Transmit(date/10+0x30);//Преобразуем число в код числа
		USART_Transmit(date%10+0x30);//Преобразуем число в код числа
		USART_Transmit('.');
		USART_Transmit(month/10+0x30);//Преобразуем число в код числа
		USART_Transmit(month%10+0x30);//Преобразуем число в код числа
		USART_Transmit('.');
		USART_Transmit(year/10+0x30);//Преобразуем число в код числа
		USART_Transmit(year%10+0x30);//Преобразуем число в код числа
		USART_Transmit(' ');
		USART_Transmit('-');
		USART_Transmit(day+0x30);//Преобразуем число в код числа
		USART_Transmit('-');
		USART_Transmit(' ');
		USART_Transmit(' ');
		USART_Transmit(hour/10+0x30);//Преобразуем число в код числа
		USART_Transmit(hour%10+0x30);//Преобразуем число в код числа
		USART_Transmit(':');
		USART_Transmit(min/10+0x30);//Преобразуем число в код числа
		USART_Transmit(min%10+0x30);//Преобразуем число в код числа
		USART_Transmit(':');
 		USART_Transmit(sec/10+0x30);//Преобразуем число в код числа
 		USART_Transmit(sec%10+0x30);//Преобразуем число в код числа
		USART_Transmit(0x0d);//переход в начало строки
		USART_Transmit(0x0a);//перевод каретки
    }
}