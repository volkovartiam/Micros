﻿/*
 * RTC.h
 *
 * Created: 25.01.2016 11:59:12
 *  Author: Владелец
 */ 


#ifndef RTC_H_
#define RTC_H_

#include "main.h"

unsigned char RTC_ConvertFromDec(unsigned char c); //перевод двоично-десятичного числа в десятичное
unsigned char RTC_ConvertFromBinDec(unsigned char c); //перевод десятичного числа в двоично-десятичное

#endif /* RTC_H_ */