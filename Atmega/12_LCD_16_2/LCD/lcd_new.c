#include "lcd_new.h"

#define RS PORTB0
#define ENABLE PORTB1

#define  SM_DDR DDRB
#define  SM_PORT PORTB

#define  setRS  SM_PORT |=(1<<PORTB0)
#define  setEnable  SM_PORT |=(1<<PORTB1)

#define  resetRS  SM_PORT &= ~(1<<PORTB0)
#define  resetEnable  SM_PORT &= ~(1<<PORTB1)

