// 
// #include "main.h"
// //----------------------------------------
// void port_ini(void)
// {
// 	PORTD=0x00;
// 	DDRD=0xFF;
// }
// //----------------------------------------
// int main(void)
// {
// 	port_ini(); //�������������� �����
// 	LCD_ini();  //�������������� �������
// 	clearlcd(); //������� �������
// 	setpos(0,0);
// 	sendcharlcd('n');
// 
// 	while(1)
// 	{
// 		_delay_ms(500);
// 	}
// }
// 



#include "main.h"

void port_ini(void)
{
	PORTD=0x00;
	DDRD=0xFF;
}
//----------------------------------------
void SPI_init(void)
{
	DDRB |= ((1<<PORTB2)|(1<<PORTB3)|(1<<PORTB5)); //����� SPI �� �����
	PORTB &= ~((1<<PORTB2)|(1<<PORTB3)|(1<<PORTB5)); //������ �������
	SPCR = ((1<<SPE)|(1<<MSTR)|(1<<SPR0));//������� ����, ������� �������
}

void SPI_SendByte (char byte)
{
	SPDR = byte;
	while(!(SPSR & (1<<SPIF)));//�������� ���� ������ �����������
}

unsigned char SPI_ChangeByte (char byte)
{
	SPDR = byte;
	while(!(SPSR & (1<<SPIF)));//�������� ���� ������ ����������� (����������)
	return SPDR;
}

unsigned int Read_3201 (void)
{
	unsigned int b1,b2;
	PORTB &= ~(1<<PORTB2); //������ �������
	b1=SPI_ChangeByte(0);//������ ����
	b2=SPI_ChangeByte(0);//������ ����
	b1=(b1<<8)|b2;//�������� ��� ����� � ������������ ��������
	b1<<=3;//������� �������� ���� (3 ����� � 1 ������
	b1>>=4;
	PORTB |= (1<<PORTB2); //������� �������
	return b1;
}

float Convert_3201 (unsigned int dt)
{
	float dt1;
	dt1=((float)dt*(4.95))/4096;
	return dt1;
}

int main(void)
{
	float dt=0;
	char str[10];
	port_ini(); //�������������� �����
	LCD_ini();  //�������������� �������
	clearlcd(); //������� �������
	SPI_init();
	while(1)
	{
		setpos(0,0);
		dt=Convert_3201(Read_3201());
		sprintf(str,"%.2fv  ",dt);
		str_lcd(str);
		//str_lcd("12345");
		_delay_ms(500);
	}
}