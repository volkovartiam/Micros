#include "main.h"
#include "ariph.h"
#include "utils.h"
//----------------------------------------------
enum eColor
{
  COLOR_BLUE,
  COLOR_GREEN,
  COLOR_RED,
  LCD_COLOR_CYAN,
  LCD_COLOR_MAGENTA,
  COLOR_YELLOW,
  COLOR_LIGHTBLUE,
  COLOR_LIGHTGREEN,
  COLOR_LIGHTRED=0,
  COLOR_LIGHTCYAN,
  COLOR_LIGHTMAGENTA,
  COLOR_LIGHTYELLOW,
  COLOR_DARKBLUE,
  COLOR_DARKGREEN,
  COLOR_DARKRED,
  COLOR_DARKCYAN,
  COLOR_DARKMAGENTA,
  COLOR_DARKYELLOW,
  COLOR_WHITE,
  COLOR_LIGHTGRAY,
  COLOR_GRAY,
  COLOR_DARKGRAY,
  COLOR_BLACK,
  COLOR_BROWN,
  COLOR_ORANGE,
};
//----------------------------------------------
/*
enum
{
  SMALL,
  MIDDLE,
  HIGH,
  HIGHEST
};
*/
typedef enum
{
  SMALL,
  MIDDLE,
  HIGH,
  HIGHEST
} eSize;
//----------------------------------------------
typedef enum
{
  LEVEL1,
  LEVEL2,
  LEVEL3,
  LEVEL4,
  LEVEL5,
  LEVEL6
} eLevels;
//----------------------------------------------
typedef unsigned int my_int32;
//----------------------------------------------
float res;
char str1[30] = {};
float yf, zf;
//----------------------------------------------
void print_res(char str[]);
void my_counter (void);
//----------------------------------------------
int main()
{
/*
  enum eColor clr;
  clr = COLOR_LIGHTYELLOW;
  printf ("Value is %d\n", clr);
*/
/*
  printf ("Value is %d\n", SMALL);
  printf ("Value is %d\n", MIDDLE);
  printf ("Value is %d\n", HIGH);
  printf ("Value is %d\n", HIGHEST);
*/
/*
  my_int32 my01;
  for (int i=1;i<=4;i++)
  {
    my01 = 1000000000*i;
    printf ("Value is %u\n", my01);
  }
*/
/*
  eSize var_Size = SMALL;
  switch (var_Size)
  {
    case SMALL:
      printf ("Value is SMALL\n");
      break;
    case MIDDLE:
      printf ("Value is MIDDLE\n");
      break;
    case HIGH:
      printf ("Value is HIGH\n");
      break;
    case HIGHEST:
      printf ("Value is HIGHEST\n");
      break;
  }
*/
  eLevels level;
  for(level=LEVEL1;level<=LEVEL6;level++)
  {
    printf ("Level is %d\n", level);
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
  }
  else
  {
    unsigned char n=6;
    printf("n=%d\n",n);
  }
  printf("===================\n");
  for(int i=0;i<3;i++)
  {
    printf("%d =================\n",i);
    for(int y=0;y<5;y++)
    {
      static int n=0;
      printf("n=%d\n",n);
      n++;
    }
  }
*/
/*
  for(int n=0;n<10;n++)
  {
    my_counter();
  }
*/
/*
  register int i = 0;
  while(i<10)
  {
    i++;
    printf("i=%d\n",i);
  }
*/
  /*
  float xf = 8;
  float yf = 3;
  float zf = 2;
  float res = xf + yf * zf;
  printf ("Value is %.5f\n", res);
  res = xf - yf / zf;
  printf ("Value is %.5f\n", res);
*/
/*
  float xf = 8;
  yf = 3;
  zf = 2;
  float res = xf + my_div();
  printf ("Value is %.5f\n", res);
  res = xf / my_sum();
  printf ("Value is %.5f\n", res);
*/
/*
  char str1[35] = {};
  int a = 0b00111000, b = 0b10000010;
  int res = a | b >> 1;
  int_to_binary(a, str1);
  printf ("Value is %s\n", str1);
  int_to_binary(b, str1);
  printf ("Value is %s\n", str1);
  printf("==========\n");
  int_to_binary(res, str1);
  printf ("Value is %s\n", str1);
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
void my_counter (void)
{
  static int i=0;
  printf("i=%d\n",i);
  i++;
}
//--------------------------------------------------------
void print_res(char str[])
{
  printf ("%s %.5f\n", str, res);
}
//--------------------------------------------------------
