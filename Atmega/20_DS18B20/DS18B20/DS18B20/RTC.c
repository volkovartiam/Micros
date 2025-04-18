/*
 * RTC.c
 *
 * Created: 12.04.2025 19:33:01
 *  Author: Artem
 */ 

#include "RTC.h"

unsigned char RTC_ConvertFromDec(unsigned char c)
{
	unsigned char ch = ((c>>4)*10+(0b00001111&c));
	return ch;
}

unsigned char RTC_ConvertFromBinDec(unsigned char c)
{
	unsigned char ch = ((c/10)<<4)|(c%10);
	return ch;
}