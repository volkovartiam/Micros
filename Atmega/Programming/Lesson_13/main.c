#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//----------------------------------------------
#define VAR_CONST1 12345
#define HELLO_CONST "\"Hello, world!!!\""
//----------------------------------------------
int main()
{
  //const int n = 12345;
  const char str1[] = {"\"Hello!!!\""};
  //printf("Constant value is %d", 12345); //int
  //printf("Constant value is %d", n); //int
  //n = 5; //не получится
  //printf("Constant value is %d", VAR_CONST1); //int
  /*
  printf("Constant value is %ld\r\n", 243L);//long
  printf("Constant value is %lu\r\n", 243UL);//unsigned long
  printf("Constant value is %lu\r\n", 0xFFAABBCCUL);//unsigned long
  printf("Constant value is %I64u\r\n", 0xFF00CCAAFFAABBCCUL);//unsigned long long
  printf("Constant value is %lu\r\n", 043210ul);//unsigned long
  */
  /*
  printf("Constant value is %.25lf\r\n", 4.514);//double
  printf("Constant value is %.25lf\r\n", 753578.71345e-21);//double
  printf("Constant value is %.25f\r\n", 4.514f);//float
  printf("Constant value is %.25f\r\n", 753578.71345e-21f);//float
  */
  /*
  printf("Constant value is %c - 0x%02X\r\n", 'Z', 'Z');//char
  printf("Constant value is %c - 0x%02X\r\n", '0', '0');//char
  printf("Constant value is %c - 0x%02X\r\n", '\0', '\0');//char
  printf("Constant value is %c - 0x%02X\r\n", '\n', '\n');//char
  */
  printf("Constant value is %s\r\n", HELLO_CONST);
  printf("Constant value is %s\r\n", str1);
  return 0; //Return an integer from a function
}
//----------------------------------------------
