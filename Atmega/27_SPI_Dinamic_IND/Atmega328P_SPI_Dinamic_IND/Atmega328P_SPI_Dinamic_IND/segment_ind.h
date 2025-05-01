/*
 * segment_ind.h
 *
 * Created: 30.04.2025 20:37:33
 *  Author: Artem
 */ 

#ifndef SEGMENT_IND_H_
#define SEGMENT_IND_H_

#include "main.h"
#include "spi.h"

#define delayTimer 5

#define LED_ON_0 0x08
#define LED_ON_1 0x04
#define LED_ON_2 0x02
#define LED_ON_3 0x01

void displayNumber(int number);
void segchar(int seg);
void ledprint(int number);


#endif /* SEGMENT_IND_H_ */