﻿#ifndef MAIN_H_
#define MAIN_H_

#define F_CPU 8000000UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int adc_value;

#include "lcd.h"
#include "adc.h"

#endif /* MAIN_H_ */