/*
 * StepperMotor.c
 *
 * Created: 10.04.2025 19:34:24
 * Author : Artem
 */ 


#define F_CPU 16000000L 


#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>


#define  SM_DDR DDRD
#define  SM_PORT PORTD

#define  IN0 PORTD0
#define  IN1 PORTD1
#define  IN2 PORTD2
#define  IN3 PORTD3

#define SM_Delay _delay_ms(5)

#define  setINs (1<<IN0)|(1<<IN1)|(1<<IN2)|(1<<IN3)
#define  setIN0  SM_PORT |=(1<<IN0)
#define  setIN1  SM_PORT |=(1<<IN1)
#define  setIN2  SM_PORT |=(1<<IN2)
#define  setIN3  SM_PORT |=(1<<IN3)

#define  resetIN0  SM_PORT &= ~(1<<IN0)
#define  resetIN1  SM_PORT &= ~(1<<IN1)
#define  resetIN2  SM_PORT &= ~(1<<IN2)
#define  resetIN3  SM_PORT &= ~(1<<IN3)

void SM_init(void){
	SM_DDR |= setINs;
	SM_PORT &= ~setINs;
}



void runLEDs()
{
	for(int i=0; i<=3; i++){
		PORTD = (1<<i);
		SM_Delay;
		PORTD = ~PORTD;
	}
}

void setSM(int exp){
	switch(exp){
		case 0:
			setIN0;	
			resetIN1; 
			resetIN2;	
			resetIN3;
			break;	
		case 1:
			setIN0;	
			setIN1; 
			resetIN2;	
			resetIN3;
			break;
		case 2:
			resetIN0;
			setIN1;
			resetIN2;
			resetIN3;
			break;
		case 3:
			resetIN0;
			setIN1;
			setIN2;
			resetIN3;
			break;
		case 4:
			resetIN0;
			resetIN1;
			setIN2;
			resetIN3;
			break;
		case 5:
			resetIN0;
			resetIN1;
			setIN2;
			setIN3;
			break;
		case 6:
			resetIN0;
			resetIN1;
			resetIN2;
			setIN3;
			break;
		case 7:
			setIN0;
			resetIN1;
			resetIN2;
			setIN3;
			break;
		default:
			break;
	}
	SM_Delay;
}


void SM_forvard()
{
	for (int i=0; i <=7; i++)
	{
		setSM(i);
	}
}


void SM_backward()
{
	for (int i=7; i >=0; i--)
	{
		setSM(i);
	}
}

int main(void)
{
	SM_init();
    while (1) 
    {
		//runLEDs();

		for (int i=0; i <=512; i++)
		{
			SM_forvard();
		}

		SM_Delay;
		for (int i=0; i <=512; i++)
		{
			SM_backward();
		}
		
    }
}

