#include "led.h"


void ledprint(int number)
{
	int R0 = number%10;			
  int R1 = number%100/10;
  int R2 = number%1000/100;
  int R3 = number/1000;

  int delayTimer = 5;
 
  /**/
	segchar(R0);
	reset_ON_LED_0;
	reset_ON_LED_1;
	reset_ON_LED_2;
	set_ON_LED_3;
  delay(delayTimer);

  segchar(R1);
  reset_ON_LED_0;
  reset_ON_LED_1;
  set_ON_LED_2;
  reset_ON_LED_3;
  delay(delayTimer);

  segchar(R2);
  reset_ON_LED_0;
  set_ON_LED_1;
  reset_ON_LED_2;
  reset_ON_LED_3;
  delay(delayTimer);
  
  segchar(R3);
  set_ON_LED_0;
  reset_ON_LED_1;
  reset_ON_LED_2;
  reset_ON_LED_3;
  delay(delayTimer);
	/**/
}

void segchar(int seg)
{
        switch (seg)
        {
                case 1:
                        reset_a;set_b;set_c;reset_d;reset_e;reset_f;reset_g;reset_dp;
                        break;
                case 2:
                        set_a;set_b;reset_c;set_d;set_e;reset_f;set_g;reset_dp;
                        break;
                case 3:
                        set_a;set_b;set_c;set_d;reset_e;reset_f;set_g;reset_dp;
                        break;
                case 4:
                        reset_a;set_b;set_c;reset_d;reset_e;set_f;set_g;reset_dp;
                        break;
                case 5:
                        set_a;reset_b;set_c;set_d;reset_e;set_f;set_g;reset_dp;
                        break;
                case 6:
                        set_a;reset_b;set_c;set_d;set_e;set_f;set_g;reset_dp;
                        break;
                case 7:
                        set_a;set_b;set_c;reset_d;reset_e;reset_f;reset_g;reset_dp;
                        break;
                case 8:
                        set_a;set_b;set_c;set_d;set_e;set_f;set_g;reset_dp;
                        break;
                case 9:
                        set_a;set_b;set_c;set_d;reset_e;set_f;set_g;reset_dp;
                        break;
                case 0:
                        set_a;set_b;set_c;set_d;set_e;set_f;reset_g;reset_dp;
                        break;
        }
}
