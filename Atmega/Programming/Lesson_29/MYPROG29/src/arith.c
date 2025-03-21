#include "arith.h"
//----------------------------------------------
extern float yf, zf;
//----------------------------------------------
float my_div(void)
{
  return yf/zf;
}
//----------------------------------------------
float my_sum(void)
{
  return yf+zf;
}
//----------------------------------------------
void my_sum_p(float a_f, float b_f, float *sum_f)
{
  *sum_f = a_f + b_f;
}
//----------------------------------------------
void my_div_p(float a_f, float b_f, float *div_f)
{
  *div_f = a_f / b_f;
}
//----------------------------------------------
