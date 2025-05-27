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
#define spi_cs PORTB0 //.0						// ��� D8  �������
#define DDR_spi_cs  DDRB |= 0b00000001			//DDRB0

#define spi_do      PINB1						// ��� D9  �������
#define DDR_spi_do  DDRB |= 0b00000010
#define spi_di      PORTB2						// ��� D10 �������
#define DDR_spi_di  DDRB |= 0b00000100
#define spi_clk     PORTB3						// ��� D11 �������
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

// ����� ���� � ����
void SPI_wr(char byte) {
	char i;							// ������� ��� �����
	for (i=0; i<8; i++) {			// ���� �� 8 ���
		_delay_us(SPI_time/2);		// ��������� �������� �����
		if (byte & 0x80) {
			//spi_di=1;				// ���������� ���� ���
			SPI_PORT |= spi_di;
		} 
		else {
			//spi_di=0;
			SPI_PORT &= !spi_di;
		}	
		byte<<=1;                   // ������� ����
		_delay_us(SPI_time/2);		// ��������� �����
		//spi_clk = 1;				// �������� �����
		SPI_PORT |= spi_clk;
		_delay_us(SPI_time);		// ��������� �������
		//spi_clk = 0;				// �������� ����
		SPI_PORT &= !spi_clk;
	}
}


/*
// ������ ���� �� ����
unsigned char SPI_rd() {
	char i, byte=0;				// ���������� ��� �������� � �����
	for (i=0; i<8; i++) {		// ���� �� 8 ���
		_delay_us(SPI_time);	// ��������� �����
		spi_clk = 1;			// ��������� �����
		_delay_us(SPI_time/2);	// �������� ��������
		if (spi_do) byte++;		// ������ ��� � ���������� ���
		if (i!=7) byte<<=1;		// ������� ����
		_delay_us(SPI_time/2);	// ��������� �������
		spi_clk = 0;
	}
	return byte;            // �������, ��� ������
}
*/
// �������� �������
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
// ����������� �������
void spi_end() {
	_delay_us(SPI_time);
	//spi_cs = 1;
	SPI_PORT |= spi_cs;
	_delay_us(SPI_time);
}



int main(void)
{
	/**/
	DDRB |= (1<<PORTB5);		// ��� �������� ��������
	PORTB |= (1 << PORTB5);
	_delay_ms(100);				// ���� ������������� �������
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
	// ������������� �����.....
	DDR_spi_clk = 1;	// �� �����
	DDR_spi_do  = 0;	// �� ����
	DDR_spi_di  = 1;	// �� �����
	DDR_spi_cs  = 1;	// �� �����
	spi_cs=1;			// �������� cs
	_delay_us(100);		// ���� ������������� �������
	*/
	
	 while(1) {
		 /*
		 char t=0;
		 _delay_us(100); // ���� �������
		 PORTB.5=0; // ����� �������� ��������
		 // ������ ID ���������� ������
		 */
		 spi_go();		//SPI_wr(0x90); SPI_wr(0x00); SPI_wr(0x00); SPI_wr(0x00);
		 SPI_wr(0x01);
		 spi_end();
		 /*
		 if (SPI_rd()==0xC2) t++; // ����� ���������� � ������
		 if (SPI_rd()==0x13) t++; // ����� ���������� � ������
		 spi_end();
		 if (t==2) PORTB.5=1;  // �������� �������� ��������
		 */
		 
		 for(int i = 0; i < 255; i++){
			spi_go();		//SPI_wr(0x90); SPI_wr(0x00); SPI_wr(0x00); SPI_wr(0x00);
			SPI_wr(i);
			spi_end();
			_delay_ms(100);
		 }
		 
		 
	 }
	 
}

