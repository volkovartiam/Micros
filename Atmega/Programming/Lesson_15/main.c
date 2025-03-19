#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//----------------------------------------------
#define BIT0 0
#define BIT1 1
#define BIT2 2
#define BIT3 3
#define BIT4 4
#define BIT5 5
#define BIT6 6
#define BIT7 7
//----------------------------------------------
void int_to_binary(int x, char* in_str);

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
  char str1[35] = {};
  /*
  unsigned char a=0b10101010, b=0b10001001;
  unsigned char res;
  res = a & b;
  int_to_binary(a, str1);
  printf("%s\r\n", 	str1);
  printf("    &\r\n");
  int_to_binary(b, str1);
  printf("%s\r\n", 	str1);
  printf("==========\r\n");
  int_to_binary(res, str1);
  printf("%s\r\n", 	str1);
  */
  /*
  unsigned char a=0b10101010, b=0b10001001;
  unsigned char res;
  res = a | b;
  int_to_binary(a, str1);
  printf("%s\r\n", 	str1);
  printf("    |\r\n");
  int_to_binary(b, str1);
  printf("%s\r\n", 	str1);
  printf("==========\r\n");
  int_to_binary(res, str1);
  printf("%s\r\n", 	str1);
  */
  /*
  unsigned char a=0b10101010, b=0b10001001;
  unsigned char res;
  res = a ^ b;
  int_to_binary(a, str1);
  printf("%s\r\n", str1);
  printf("   ^\r\n");
  int_to_binary(b, str1);
  printf("%s\r\n", str1);
  printf("==========\r\n");
  int_to_binary(res, str1);
  printf("%s\r\n", str1);  
  */
  /*
  unsigned char a=0b00111000;
  unsigned char res;
  res = a>>2;
  int_to_binary(a, str1);
  printf("%s\r\n", 	str1);
  printf("  a>>2\r\n");
  int_to_binary(res, str1);
  printf("%s\r\n", str1);
  res = a<<2;
  printf("  a<<2\r\n");
  int_to_binary(res, str1);
  printf("%s\r\n", str1);
  res = a>>4;
  printf("  a>>4\r\n");
  int_to_binary(res, str1);
  printf("%s\r\n", str1);
  res = a<<4;
  printf("  a<<4\r\n");
  int_to_binary(res, str1);
  printf("%s\r\n", str1);
  */
  /*
  unsigned char a=0b00111000;
  unsigned char res;
  res = ~a;
  int_to_binary(a, str1);
  printf("%s\r\n", str1);
  printf("   ~a\r\n");
  int_to_binary(res, str1);
  printf("%s\r\n", str1);
  */
  /*
  unsigned char a=0b11000011;
  //Установим два бита в числе
  int_to_binary(a, str1);
  printf("%s\r\n", str1);
  a |= ((1<<BIT3) | (1<<BIT4));
  printf("bit3 and bit4 SET\r\n");
  int_to_binary(a, str1);
  printf("%s\r\n", str1);
  */
  unsigned char a=0b11000011;
  //Сбросим два бита в числе
  int_to_binary(a, str1);
  printf("%s\r\n", str1);
  a &= ~((1<<BIT6) | (1<<BIT1));
  printf("bit6 and bit1 RESET\r\n");
  int_to_binary(a, str1);
  printf("%s\r\n", str1);  
  return 0; //Return an integer from a function
}
