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
//#pragma pack(push,1)
//#pragma scalar_storage_order big-endian
/*
typedef struct
{
  unsigned char x;
  unsigned short y;
  unsigned int z;
} my_arg_t;
*/
//#pragma scalar_storage_order little-endian
//#pragma pack(pop)
typedef union
{
  unsigned char x;
  unsigned short y;
  unsigned int z;
} my_arg_t;
//----------------------------------------------
void print_str(const char *c_str);
void print_chars(const char *c_str);
void print_uint32_arr(const unsigned int *p_uint, unsigned int len);
//----------------------------------------------
int main()
{
  printf("sizeof data is %d\n", sizeof(my_arg_t));
  my_arg_t my_arg;
  my_arg.z = 0x11223344;
  printf("z = 0x%08X\n", my_arg.z);
  my_arg.y = 0x5566;
  printf("y = 0x%04X\n", my_arg.y);
  printf("z = 0x%08X\n", my_arg.z);
  my_arg.x = 0x77;
  printf("x = 0x%02X\n", my_arg.x);
  printf("y = 0x%04X\n", my_arg.y);
  printf("z = 0x%08X\n", my_arg.z);
  printf("addr x = 0x%08X\n", (unsigned int)&my_arg.x);
  printf("addr y = 0x%08X\n", (unsigned int)&my_arg.y);
  printf("addr z = 0x%08X\n", (unsigned int)&my_arg.z);

















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
