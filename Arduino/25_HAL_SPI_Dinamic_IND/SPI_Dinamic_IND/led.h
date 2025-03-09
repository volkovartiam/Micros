#include <Arduino.h>

#define latchPin 8   //Pin connected to ST_CP of 74HC595
#define clockPin 12  //Pin connected to SH_CP of 74HC595
#define dataPin 11   //Pin connected to DS of 74HC595

#define delayTimer 500

#define LED_ON_0 254
#define LED_ON_1 253
#define LED_ON_2 251
#define LED_ON_3 247

void initSPITransfer(void);

void segchar(int seg);

void ledprint(int number);

