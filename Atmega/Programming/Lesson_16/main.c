#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//----------------------------------------------

//----------------------------------------------
void int_to_binary(int x, char* in_str)
{
  char str_tmp[9] = {};
  unsigned char i, j, k;
  unsigned char bt[4] = {0};
  for (j=0; j<4; j++)
  {
    if(((x >> j*8)==0) && (j>0))	break;
    bt[j] = (unsigned char) (x >> j*8);
  }
  strcpy(in_str,"0b");
  for (k=0; k<j; k++)
  {
    for (i=0; i<8; i++)
    {
      switch ((bt[j-k-1] >> i) & 0b00000001)
      {
        case 1:  str_tmp[7-i] = '1'; break;
        case 0:  str_tmp[7-i] = '0'; break;
      }
    }
    strcat(in_str,str_tmp);
  }
}
//----------------------------------------------
int main()
{
/*
  int x = 7;
  printf("Value is %d", x);
*/
/*
  int x = 7;
  int y;
  int z;
  y = x + 5;
  printf("Value is %d\r\n", y);
  z = x + y;
  printf("Value is %d\r\n", z);
*/
/*
  int x = 7;
  int y;
  y = x < 10;
  printf("Value is %d\r\n", y);
  y = x > 10;
  printf("Value is %d", y);
*/
/*
  int x = 7;
  int y = 5;
  x += 3;
  printf("Value is %d\r\n", x);
  y -= x;
  printf("Value is %d\r\n", y);
  x *= 5;
  printf("Value is %d\r\n", x);
  x /= y;
  printf("Value is %d\r\n", x);
  x %= 3;
  printf("Value is %d\r\n", x);
*/
/*
  char str1[35] = {};
  unsigned char x=0b10101010, y=0b10001001;
  int_to_binary(x, str1);
  printf("%s\r\n", str1);
  printf("   ^\r\n");
  int_to_binary(y, str1);
  printf("%s\r\n", str1);
  printf("==========\r\n");
  y ^= x;
  int_to_binary(y, str1);
  printf("%s\r\n\r\n", 	str1);
  int_to_binary(x, str1);
  printf("%s\r\n", str1);
  printf("  >> 3\r\n");
  printf("==========\r\n");
  x >>= 3;
  int_to_binary(x, str1);
  printf("%s\r\n", str1);
*/
/*
  int x = 3;
  int y = 7;
  int z = 7;
  z = y = x = 5;
  printf("Values are %d, %d, %d", x, y, z);
*/
/*
  int x = 3;
  int y = 7;
  int z = 7;
  x = 5;
  y = 5;
  z = 5;
  printf("Values are %d, %d, %d", x, y, z);
*/
/*
  int x = 10;
  int y;
  while((y = x)>3)
  {
    printf("Value is %d\r\n", y);
    x--;
  }
  printf("\r\n");
  x = 10;
  while((y = x))
  {
    printf("Value is %d\r\n", y);
    x--;
  }
*/
  int x = -10;
  int y;
  while((y = x))
  {
    printf("Value is %d\r\n", y);
    x++;
  }












  return 0; //Return an integer from a function
}
