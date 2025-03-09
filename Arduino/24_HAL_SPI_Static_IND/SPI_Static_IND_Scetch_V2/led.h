#include <Arduino.h>

#define latchPin 8   //Pin connected to ST_CP of 74HC595
#define clockPin 12  //Pin connected to SH_CP of 74HC595
#define dataPin 11   //Pin connected to DS of 74HC595

void initSPITransfer(void);




void segchar(int seg);

#define a 0
#define reset_a digitalWrite(a, LOW)
#define set_a digitalWrite(a, HIGH)

#define b 1
#define reset_b digitalWrite(b, LOW)
#define set_b digitalWrite(b, HIGH)

#define c 2
#define reset_c digitalWrite(c, LOW)
#define set_c digitalWrite(c, HIGH)

#define d 3
#define reset_d digitalWrite(d, LOW)
#define set_d digitalWrite(d, HIGH)

#define e 4
#define reset_e digitalWrite(e, LOW)
#define set_e digitalWrite(e, HIGH)

#define f 5
#define reset_f digitalWrite(f, LOW)
#define set_f digitalWrite(f, HIGH)

#define g 6
#define reset_g digitalWrite(g, LOW)
#define set_g digitalWrite(g, HIGH)

#define dp 7
#define reset_dp digitalWrite(dp, LOW)
#define set_dp digitalWrite(dp, HIGH)


