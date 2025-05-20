/*
 * Encoder.c
 *
 * Created: 20.05.2025 22:46:55
 * Author : Artem
 */ 

#include "main.h"
//-------------------------------------------------------
volatile short cnt=0;
//-------------------------------------------------------
void timer_ini(void)
{
	OCR1A = 25; //интервал в 100 микросекунд (10 к√ц) при 16 м√ц
	TCCR1B |= (1 << WGM12);
	TCCR1B |= (1 << CS11) | (1 << CS10); //дл€ 10 к√ц
	TIMSK1 |= (1 << OCIE1A);
}
//-------------------------------------------------------
ISR (TIMER1_COMPA_vect)
{
	static unsigned char new_state=0;
	static unsigned char old_state=0;
	
	new_state = (PIND&0b00011000)>>3;
	if(!(PIND&0b00000100)) cnt=0;
	switch(old_state | new_state)
	{
		case 0x01: case 0x0e:
		cnt++;
		break;
		case 0x04: case 0x0b:
		cnt--;
		break;
	}
	old_state = new_state<<2;
}
//-------------------------------------------------------
int main(void)
{
	short cnt_local = 0;
	short cnt_local_old = -1;
	DDRD &= ~0b00011100;
	PORTD = 0b00000100;
	char str1[21];
	I2C_Init();
	LCD_ini();
	LCD_Clear();
	cli();
	timer_ini();
	sei();
	while (1)
	{
		cli();
		cnt_local = cnt;
		sei();
		if(cnt_local != cnt_local_old)
		{
			LCD_SetPos(0,0);
			sprintf(str1, "%6d", cnt_local);
			LCD_String(str1);
			cnt_local_old = cnt_local;
		}
		_delay_ms(10);
	}
}
//-------------------------------------------------------