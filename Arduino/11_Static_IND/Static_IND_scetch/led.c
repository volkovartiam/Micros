#include "led.h"

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
