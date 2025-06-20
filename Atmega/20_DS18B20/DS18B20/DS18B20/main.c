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

	unsigned int tt=0; //���������� ��� �������� �����������
	/*

	I2C_Init(); //�������������� ���� I2C
	LCD_ini();  //�������������� �������
	clearlcd(); //������� �������
	*/
	USART_Init();
	port_ini(); //�������������� �����

	char LocalData;
	
	//������������� �����
	// 	I2C_StartCondition();
	// 	I2C_SendByte(0b11010000);
	// 	I2C_SendByte(0);//��������� �� 0x00
	// 	I2C_SendByte(RTC_ConvertFromBinDec(0)); //�������
	// 	I2C_SendByte(RTC_ConvertFromBinDec(31)); //������
	// 	I2C_SendByte(RTC_ConvertFromBinDec(20)); //����
	// 	I2C_SendByte(RTC_ConvertFromBinDec(5)); //���� ������
	// 	I2C_SendByte(RTC_ConvertFromBinDec(29)); //����
	// 	I2C_SendByte(RTC_ConvertFromBinDec(1)); //�����
	// 	I2C_SendByte(RTC_ConvertFromBinDec(16)); //���
	//	I2C_StopCondition();

	while(1)
	{
		/*
		//������ �������
		I2C_SendByteByADDR(0,0b11010000);	//��������� �� ����� 0
		_delay_ms(200);
		I2C_StartCondition(); //�������� ������� START
		I2C_SendByte(0b11010001); //�������� � ���������� ��� ������
		sec = I2C_ReadByte();
		min = I2C_ReadByte();
		hour = I2C_ReadByte();
		day = I2C_ReadByte();
		date = I2C_ReadByte();
		month = I2C_ReadByte();
		year = I2C_ReadLastByte();
		I2C_StopCondition(); //�������� ������� STOP
		sec = RTC_ConvertFromDec(sec); //����������� � ���������� ������
		min = RTC_ConvertFromDec(min); //����������� � ���������� ������
		hour = RTC_ConvertFromDec(hour); //����������� � ���������� ������
		day = RTC_ConvertFromDec(day); //����������� � ���������� ������
		year = RTC_ConvertFromDec(year); //����������� � ���������� ������
		month = RTC_ConvertFromDec(month); //����������� � ���������� ������
		date = RTC_ConvertFromDec(date); //����������� � ���������� ������
		setpos(0,0); //������ ������ �� ������ ���������
		sendcharlcd(date/10+0x30);//����������� ����� � ��� �����
		sendcharlcd(date%10+0x30);//����������� ����� � ��� �����
		sendcharlcd('.');
		sendcharlcd(month/10+0x30);//����������� ����� � ��� �����
		sendcharlcd(month%10+0x30);//����������� ����� � ��� �����
		sendcharlcd('.');
		sendcharlcd('2');
		sendcharlcd('0');
		sendcharlcd(year/10+0x30);//����������� ����� � ��� �����
		sendcharlcd(year%10+0x30);//����������� ����� � ��� �����
		sendcharlcd(' ');
		sendcharlcd('-');
		sendcharlcd(day+0x30);//����������� ����� � ��� �����
		sendcharlcd('-');
		setpos(0,1); //������ ������ �� ������ ���������
		sendcharlcd(hour/10+0x30);//����������� ����� � ��� �����
		sendcharlcd(hour%10+0x30);//����������� ����� � ��� �����
		sendcharlcd(':');
		sendcharlcd(min/10+0x30);//����������� ����� � ��� �����
		sendcharlcd(min%10+0x30);//����������� ����� � ��� �����
		sendcharlcd(':');
		sendcharlcd(sec/10+0x30);//����������� ����� � ��� �����
		sendcharlcd(sec%10+0x30);//����������� ����� � ��� �����
		sendcharlcd(' ');
		tt = converttemp(dt_check()); //�������� �����������
		sendcharlcd(tt/10+0x30);//����������� ����� � ��� �����
		sendcharlcd(tt%10+0x30);//����������� ����� � ��� �����
		sendcharlcd('*');
		sendcharlcd('C');
		
		//LocalData = USART_ReceivePolling();
		//USART_Transmit(LocalData);
		
		tt = converttemp(dt_check()); //�������� �����������
		USART_Transmit(tt/10);
		USART_Transmit(tt%10);
		_delay_ms(200);
		*/
		
		/*
		char test = dt_testdevice();	
		if(test == 1){
			USART_Transmit('O');
			USART_Transmit('K');
			USART_Transmit(0x0d);	//������� � ������ ������
			USART_Transmit(0x0a);	//������� �� ����� ������
		} else {
			USART_Transmit('N');
			USART_Transmit('O');
			USART_Transmit(0x0d);	//������� � ������ ������
			USART_Transmit(0x0a);	//������� �� ����� ������	
		}
		*/
		
		unsigned int tt = dt_check();
		unsigned int tt_temporary = tt;
		USART_Transmit(tt_temporary>>8);
		USART_Transmit(tt);
		
		_delay_ms(500);
		
	}
}

