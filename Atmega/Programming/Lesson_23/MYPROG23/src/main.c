#include "main.h"
#include "ariph.h"
#include "utils.h"
//----------------------------------------------
int res;
char str1[30] = {};
float yf, zf;
//----------------------------------------------
void print_res(char str[]);
void my_counter (void);
//----------------------------------------------
int main()
{
  register int i = 0;
    while(i<10)
    {
      i++;
      printf("i=%d\n",i);
    }
  /*
  float xf = 8;
  float yf = 3;
  float zf = 2;
  char str1[30] = {};
  res = xf + yf + zf;
  //printf ("Value is %.5f\n", res);
  sprintf (str1, "Value is ");
  print_res(str1);
  res = xf + yf - zf;
  //printf ("Value is %.5f\n", res);
  sprintf (str1, "Value is ");
  print_res(str1);

  printf("===================\n");
  if(xf<yf)
  {
    unsigned char n=5;
    printf("n=%d\n",n);
  }else {
    unsigned char n=6;
    printf("n=%d\n",n);
  }

  printf("===================\n");
    for(int i=0;i<3;i++)
    {
      printf("%d =================\n",i);
      for(int y=0;y<5;y++)
      {
        // int n=0;
        static int n; // = 0;
        n=0;
        printf("n=%d\n",n);
        n++;
      }
    }

    printf("my_counter===================\n");
    for(int n=0;n<10;n++)
    {
      my_counter();
    }
    */
/**/
/*
  float xf = 8;
  float yf = 3;
  float zf = 2;
  float res = xf + yf * zf;
  printf ("Value is %.5f\n", res);
  res = xf - yf / zf;
  printf ("Value is %.5f\n", res);


  float xf = 8;
  yf = 3;
  zf = 2;
  float res = xf + my_div();
  printf ("Value is %.5f\n", res);
  res = xf / my_sum();
  printf ("Value is %.5f\n", res);
*/
  /*
  auto char str1[35] = {};
  auto int a = 0b00111000, b = 0b10000010;
  auto int res = a | b >> 1;
  int_to_binary(a, str1);
  printf ("Value is %s\r\n", str1);
  int_to_binary(b, str1);
  printf ("Value is %s\r\n", str1);
  printf("==========\r\n");
  int_to_binary(res, str1);
  printf ("Value is %s\r\n", str1);
*/
/*
  char str1[35] = {};
  int a = 0b00111000, b = 0b10000010, c = 0b01000001;
  int_to_binary(a, str1);
  printf ("Value is %s\r\n", str1);
  int_to_binary(b, str1);
  printf ("Value is %s\r\n", str1);
  int_to_binary(c, str1);
  printf ("Value is %s\r\n", str1);
  printf("==========\r\n");
  int res = a | (b ^ c);
  int_to_binary(res, str1);
  printf ("Value is %s\r\n", str1);
*/
  return 0; //Return an integer from a function
}
//--------------------------------------------------------
void print_res(char str[])
{
  printf ("%s %.5f\n", str, res);
}
//--------------------------------------------------------

void my_counter (void)
{
  static int i=0;
  printf("i=%d\n",i);
  i++;
}





