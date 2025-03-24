#include "main.h"
#include "arith.h"
#include "utils.h"
#include "student.h"
//----------------------------------------------
unsigned char student_counter = 0;
//----------------------------------------------
float res;
float yf, zf;
//----------------------------------------------
/*
#pragma pack(push, 1)
typedef struct
{
  unsigned char diad0:2;
  unsigned char tri0:3;
  unsigned char bit0:1;
  unsigned char bit1:1;
  unsigned char a;
  unsigned short b;
} my_arg_t;
#pragma pack(pop)
*/
#pragma pack(push, 1)
typedef struct
{
  unsigned short tetr0:4;
  unsigned short tetr1:4;
  unsigned short diad1:2;
  unsigned short diad2:2;
  unsigned short triad1:3;
  unsigned short bit1:1;
  unsigned short b;
} my_arg_t;
#pragma pack(pop)
//----------------------------------------------
void print_str(const char *c_str);
void print_chars(const char *c_str);
void print_uint32_arr(const unsigned int *p_uint, unsigned int len);
//----------------------------------------------
int main()
{
  char str1[35];
  printf("sizeof data is %d\n", sizeof(my_arg_t));
  my_arg_t my_arg;
  /*
  my_arg.diad0 = 0b10;
  my_arg.tri0 = 0b101;
  my_arg.bit0 = 0b1;
  my_arg.bit1 = 0b1;
  my_arg.a = 0x98;
  my_arg.b = 0x7654;
  int_to_binary(my_arg.diad0, str1);
  printf("diad0= %s\n", str1);
  int_to_binary(my_arg.tri0, str1);
  printf("tri0 = %s\n", str1);
  int_to_binary(my_arg.bit0, str1);
  printf("bit0 = %s\n", str1);
  int_to_binary(my_arg.bit1, str1);
  printf("bit1 = %s\n", str1);
  printf("a = 0x%02X\n", my_arg.a);
  printf("b = 0x%04X\n", my_arg.b);
  */
  my_arg.tetr0 = 0xA;
  my_arg.tetr1 = 0xB;
  my_arg.diad1 = 0b10;
  my_arg.diad2 = 0b01;
  my_arg.triad1 = 0b101;
  my_arg.bit1 = 0b1;
  my_arg.b = 0x7654;
  printf("my_arg = %08X\n", *(unsigned int *)&my_arg);
  *(unsigned int *)&my_arg = 0x89ABCDEF;
  uint32_to_binary(*(unsigned int*)&my_arg, str1);
  printf("%s\n",str1);
  printf("tetr0 = %01X\n", my_arg.tetr0);
  printf("tetr1 = %01X\n", my_arg.tetr1);
  printf("diad1 = %01X\n", my_arg.diad1);
  printf("diad2 = %01X\n", my_arg.diad2);
  printf("triad1 = %01X\n", my_arg.triad1);
  printf("bit1 = %01X\n", my_arg.bit1);
  printf("b = 0x%04X\n", my_arg.b);











  return 0; //Return an integer from a function
}
//--------------------------------------------------------
void print_str(const char *c_str)
{
  printf("%s\n",c_str);
}
//--------------------------------------------------------
void print_chars(const char *c_str)
{
  int i=0;
  while(c_str[i])
  {
    printf("%c\n",c_str[i]);
    i++;
  }
}
//--------------------------------------------------------
void print_uint32_arr(const unsigned int *p_uint, unsigned int len)
{
  int i=0;
  while(len)
  {
    printf("0x%08X\n",p_uint[i]);
    len--;
    i++;
  }
}
//--------------------------------------------------------
