/*
 * PWM.c
 *
 * Created: 02.04.2025 8:06:42
 * Author : 589
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define F_CPU 12000000L

int i = 0;

void timerInit(void){
	/*
	TCCR1B |= (1<<WGM12);		
	TIMSK1 |= (1<<OCIE1A);	
	OCR1AH = 0b11111010;		
	OCR1AL = 0b01110010;
	TCCR1B |= (1<<CS12);	
	*/
	
	/*
	ASSR=0x00;
	TCCR1B=0b01101110;		//Fast PWM, Clear OC2 on Compare Match, clkT2S/256 (From prescaler) (реальная частота получится 8мгц/256 = 31250 гц)
	TCNT2=0x00;				// Timer Value = 0
	OCR1AL=0x1F;			//Output Compare Register = 0 - в нашем случае это скважность шим (0 - это 0, а FF - 100 %)
	TIMSK1|=0x00;//
	*/
	
	
  DDRD |= (1 << PORTD6);  //OC0A (12)
  DDRD |= (1 << PORTD5);  //OC0B (11)

  TCCR0A = 0;
  TCCR0B = 0;
  TCNT0 = 0;
  
  //Не инверсный режим работы OC0A и OC0B
  TCCR0A |= (1 << COM0A1);
  TCCR0A |= (1 << COM0B1);

  //Режим 3: Fast PWM (Быстрый ШИМ), частота регулируется предделителем, скважность регулируется OCR0A и OCR0B
  TCCR0A |= (1 << WGM00) | (1 << WGM01);
  
  //Предделитель - 64 - 976 ГЦ
  TCCR0B |= (1 << CS02)|(1 << CS00);
  
  OCR0A = 200;
  OCR0B = 70;
  OCR0B = 250;
	
   OCR0A = 5;
   OCR0B = 7;
	
			
}


ISR(TIMER1_COMPA_vect)
{
	/*
	if(i==0) {
		PORTD = 0b00000000;
	}
	if(i==1) {
		PORTD = 0b00000001;
	}
	if(i==2){
		i=-1;
	}
	i++;
	*/
}


int main(void)
{
	
	/*
	DDRD = 0xFF;
	PORTD = 0b00000000;
	
	PORTD=0x00;
	DDRD=0x08;
	*/
	unsigned char pwm_state=0;
	timerInit();
	sei();
	
    while (1) 
    {
		
		if (pwm_state==0)
		{
			OCR0A++;
			OCR0B++;
			if (OCR0B>254)
			{
				pwm_state=1;
			}
		}
		if (pwm_state==1)
		{
			OCR0B--;
			if (OCR0B<1)
			{
				pwm_state=0;
			}
		}
		_delay_ms(3);
		
		/*
		PORTD = 0b00000000;
		_delay_ms(500);
		PORTD = 0b00000001;
		_delay_ms(500);
		*/
	}
	
}
