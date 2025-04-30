#include "main.h"

#define MOSI   3
#define MISO   4
#define SCK  5
#define SS   2

//char buffer[512] ="Selection of RAM is set by the previous address set instruction. If the address set instruction of RAM is not performed before this instruction, the data that has been read first is invalid, as the direction of AC is not yet determined. If RAM data is read several times without RAM address instructions set before, read operation, the correct RAM data can be obtained from the second. But the first data would be incorrect, as there is no time margin to transfer RAM data. In case of DDRAM read operation The..."; //Буфер данных для записи/чтения
char buffer2[512] ={}; //Буфер данных для чтения
//----------------------------------------
void port_ini(void)
{
	PORTD=0x00;
	DDRD=0xFF;
	PORTB|=(1<<SS)|(1<<MISO)|(1<<MOSI);
	DDRB|=(1<<SS)|(1<<MOSI)|(1<<SCK);
}

void SPI_SendByte (unsigned char byte)
{
	unsigned char i;
	for (i=0;i<8;i++) //движемся по битам байта
	{
		if ((byte&0x80)==0x00)//проверяем левый бит
		PORTB&=~(1<<MOSI); //если 0, то выставляем 0 на шине
		else PORTB|=(1<<MOSI); //если 1, то выставляем 1
		byte<<=1; //сдвигаем влево, в сторону старшего для проверки следующего бита
		PORTB|=(1<<SCK); //фронт на ножке SCK
		asm("nop"); //1 такт подождём
		PORTB&=~(1<<SCK); //спад на ножке SCK
	}
}

unsigned char SPI_ReceiveByte (void)
{
	unsigned char i, result=0;
	for(i=0;i<8;i++)
	{
		PORTB|=(1<<SCK); //фронт на ножке SCK
		result<<=1; //сдвигаем влево, чтобы записать новый бит
		if ((PINB&(1<<MISO))!=0x00) //запишем новый бит (в младший разряд)
		result=result|0x01; //Считать бит данных
		PORTB&=~(1<<SCK); //спад на ножке SCK
		asm("nop"); //1 такт подождём
	}
	return result;
}

unsigned char SD_cmd(char dt0, char dt1, char dt2, char dt3, char dt4, char dt5) //передача команды (пример даташит стр 40)
{
	unsigned char result;
	long int cnt;
	SPI_SendByte (dt0);		//Индекс
	SPI_SendByte (dt1);		//Аргумент
	SPI_SendByte (dt2);
	SPI_SendByte (dt3);
	SPI_SendByte (dt4);
	SPI_SendByte (dt5);		//контрольная сумма
	cnt=0;
	do {				//Ждем ответ в формате R1 (даташит стр 109)
		result=SPI_ReceiveByte();
		cnt++;
	} while ( ((result&0x80)!=0x00)&&(cnt<0xFFFF) );
	return result;
}

unsigned char SD_Init(void)
{
	unsigned char i, temp;
	long int cnt;
	for (i=0;i<10;i++)			//80 импульсов (не менее 74) Даташит стр 94
	SPI_SendByte(0xFF);
	PORTB&=~(1<<SS);			//опускаем SS
	temp=SD_cmd (0x40,0x00,0x00,0x00,0x00,0x95); // CMD0 Даташит стр 102 и 96
	if (temp!=0x01) return 3;		//Выйти, если ответ не 0х01 (результат
	SPI_SendByte (0xFF);
	cnt=0;
	do{
		temp=SD_cmd (0x41,0x00,0x00,0x00,0x00,0x95);	//CMD1 (аналогично CMD0, только индекс меняется)
		SPI_SendByte (0xFF);
		cnt++;
	} while ( (temp!=0x00)&&(cnt<0xFFFF) );		//Ждем ответа R1
	if (cnt>=0xFFFF) return 4;
	return 0;
}

unsigned char SD_Write_Block (char* bf, unsigned char dt1, unsigned char dt2, unsigned char dt3, unsigned char dt4)
{
	unsigned char result;
	long int cnt;
	result=SD_cmd(0x58,dt1,dt2,dt3,dt4,0x95);		//CMD24 даташит стр 51 и 97-98
	if (result!=0x00) return 6;			//Выйти, если результат не 0x00
	SPI_SendByte (0xFF);
	SPI_SendByte (0xFE);				//Начало буфера
	for (cnt=0;cnt<512;cnt++)	SPI_SendByte(bf[cnt]); //Данные
	SPI_SendByte (0xFF);				//Котрольная сумма
	SPI_SendByte (0xFF);
	result=SPI_ReceiveByte();
	if ((result&0x05)!=0x05) return 6;		//Выйти, если результат не 0x05 (Даташит стр 111)
	cnt=0;
	do {						//Ждем окончания состояния BUSY
		result=SPI_ReceiveByte();
		cnt++;
	}while ( (result!=0xFF)&&(cnt<0xFFFF) );
	if (cnt>=0xFFFF) return 6;
	return 0;
}

unsigned char SD_Read_Block (char* bf, unsigned char dt1, unsigned char dt2, unsigned char dt3, unsigned char dt4)
{
	unsigned char result;
	long int cnt;
	result=SD_cmd (0x51,dt1,dt2,dt3,dt4,0x95);		//CMD17 даташит стр 50 и 96
	if (result!=0x00) return 5;			//Выйти, если результат не 0x00
	SPI_SendByte (0xFF);
	cnt=0;
	do{						//Ждем начала блока
		result=SPI_ReceiveByte();
		cnt++;
	} while ( (result!=0xFE)&&(cnt<0xFFFF) );
	if (cnt>=0xFFFF) return 5; 
	for (cnt=0;cnt<512;cnt++)	bf[cnt]=SPI_ReceiveByte(); //получаем байты блока из шины в буфер
	SPI_ReceiveByte();					//Получаем контрольную сумму
	SPI_ReceiveByte();
	return 0;
}


int main(void)
{
	unsigned char i;
	char str[10];
	unsigned char result;
	port_ini();
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
	_delay_ms(1000);
	asm("nop");
	result=SD_Init();
 	sprintf(str,"%d",result);
 	clearlcd();//очистим дисплей
 	setpos(0,0);
 	str_lcd(str);
//   	result=SD_Write_Block(buffer,0x00,0x00,0x04,0x00);//Запишем блок из буфера
//  	sprintf(str,"%d",result);
//   	setpos(0,1);
//   	str_lcd(str);
	result=SD_Read_Block(buffer2,0x00,0x00,0x04,0x00);	//Считаем блок в буфер
 	sprintf(str,"%d",result);
 	setpos(0,2);
 	str_lcd(str);
  	_delay_ms(1000);
 	for (i=0;i<=22;i++)	{str80_lcd(buffer2+i*20);_delay_ms(1000);}
    while(1)
    {
    }
}