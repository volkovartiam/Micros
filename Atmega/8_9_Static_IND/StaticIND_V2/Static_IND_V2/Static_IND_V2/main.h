/*
 * main.h
 *
 * Created: 31.05.2025 14:18:04
 *  Author: Artem
 */ 


#ifndef MAIN_H_
#define MAIN_H_

//#define F_CPU 16000000L
#include <util/delay.h>
#include "GPIO.h"
#include "Segments.h"
#include "SegmentStruct.h"
#define F_CPU 16000000L

/*
 Code for skip delays in debug mode
*/
#define SIMULATING
#if defined(SIMULATING)
#define DELAY_MS(n)    do {} while (0)
#else
#define _delay_ms(n)    _delay_ms(n)
#endif


#endif /* MAIN_H_ */ 