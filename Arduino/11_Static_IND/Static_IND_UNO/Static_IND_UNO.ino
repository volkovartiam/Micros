#include "led.c"


/*
#define a 0
#define reset_a digitalWrite(a, HIGH)
#define set_a digitalWrite(a, LOW)

#define b 1
#define reset_b digitalWrite(b, HIGH)
#define set_b digitalWrite(b, LOW)

#define c 2
#define reset_c digitalWrite(c, HIGH)
#define set_c digitalWrite(c, LOW)

#define d 3
#define reset_d digitalWrite(d, HIGH)
#define set_d digitalWrite(d, LOW)

#define e 4
#define reset_e digitalWrite(e, HIGH)
#define set_e digitalWrite(e, LOW)

#define f 5
#define reset_f digitalWrite(f, HIGH)
#define set_f digitalWrite(f, LOW)

#define g 6
#define reset_g digitalWrite(g, HIGH)
#define set_g digitalWrite(g, LOW)

#define dp 7
#define reset_dp digitalWrite(dp, HIGH)
#define set_dp digitalWrite(dp, LOW)
*/

int ms_delay = 200;


void setup() {

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);

  reset_a;
  reset_b;
  reset_c;
  reset_d;
  reset_e;
  reset_f;
  reset_g;
  reset_dp;

  delay(ms_delay);
  
}

void loop() {

  /**/
  for(int i = 0; i < 10; i++){
    segchar(i);
    delay(ms_delay);  
  }
  /**/

}






