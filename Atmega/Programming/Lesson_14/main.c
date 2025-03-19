#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//----------------------------------------------
float my_div(float a, float b);

float my_div(float a, float b)
{
  return a/b;
}
//----------------------------------------------
int main()
{
/*
  char c = 54;
  int i = c;
  printf("Value is %d", i);
*/
/*
  int i = 1000000;
  char c = i;
  printf("Value is %d", c);
*/
/*
  int i = 8;
  int j = 3;
  float f_res = i / j;
  printf("Result is %.10f", f_res);
*/
/*
  int i = 8;
  int j = 3;
  float f_res = (float) i / (float) j;
  printf("Result is %.10f", f_res);
*/
/*
  int i = 8;
  int j = 3;
  float f_res = (float) i / j;
  printf("Result is %.10f", f_res);
*/
/*
  int i = 8;
  int j = 3;
  float f_res = i / (float) j;
  printf("Result is %.10f", f_res);
*/

  int i = 8;
  int j = 3;
  float f_res = my_div (i, j);
  printf("Result is %.10f", f_res);

/**/
/*
  //небезопасное преобразование типов - от большего типа к меньшему
  unsigned int i = 65535;
  unsigned char c = i;
  unsigned int j = c;
  printf("Value is %u, %u, %u", i, c, j);
*/
/*
  //безопасное преобразование типов
  unsigned int i = 65535;
  unsigned long long j = i;
  printf("Value is %u, %I64u", i, j);
*/
/*
  int arr_i[10] = {0,1,2,3,4,5,6,7,8,9};
  float f = 3.1f;
  printf("Value is %d", arr_i[f]);
*/

  return 0; //Return an integer from a function
}
//----------------------------------------------
