#include "main.h"
#include "ariph.h"
#include "utils.h"
//----------------------------------------------
/*
struct student
{
  char nm[60];
  unsigned char age;
  unsigned char course;
};
*/
typedef struct
{
  char nm[60];
  unsigned char age;
  unsigned char course;
} student;
//----------------------------------------------
unsigned char student_counter = 0;
//----------------------------------------------
typedef unsigned int my_int32;
//----------------------------------------------
float res;
char str1[30] = {};
float yf, zf;
//----------------------------------------------
student addStudent (char ch[], unsigned int cr, unsigned int ag);
//----------------------------------------------
int main()
{

  unsigned int a;
  a = 0xFE340056;
  printf("Value a is\t\t0x%08X\n", a);
  unsigned int *p_a;
  p_a = &a;
  printf("Value p_a is\t\t0x%08X\n", (unsigned int)p_a);
  printf("Value *p_a is\t\t0x%08X\n", *p_a);



  printf("-------------------------------------\n");
  *p_a = 0xE2222222;
  printf("Value a is\t\t0x%08X\n", a);

  printf("-------------------------------------\n");
  unsigned int b = 0xFAFAFAFA;
  printf("Value b is\t\t0x%08X\n", b);
  p_a = &b;
  printf("Value p_a is\t\t0x%08X\n", (unsigned int)p_a);
  printf("Value *p_a is\t\t0x%08X\n", *p_a);
  printf("Value p_a is\t\t0x%08X\n", (unsigned int)p_a);


  printf("-------------------------------------\n");
  unsigned char uch[10] = {0x33, 0x44, 0x55, 0x66, 0x77, \
                           0x88, 0x99, 0xAA, 0xBB, 0xCC};
  printf("Value uch is\t\t0x%08X\n", (unsigned int)uch);


  unsigned char *p_uch = &uch[0];
  printf("Value p_uch is\t\t");
  for(int i=0; i<10; i++) printf("0x%02X ", p_uch[i]);
  /**/

  printf("\n-------------------------------------\n");
  unsigned int **p_p_a;
  p_a = &a;
  p_p_a = &p_a;
  printf("Value p_p_a is\t\t0x%08X\n", (unsigned int)p_p_a);
  printf("Value *p_p_a is\t\t0x%08X\n", (unsigned int)*p_p_a);
  printf("Value **p_p_a is\t0x%08X\n", (unsigned int)**p_p_a);


  **p_p_a = 0xBEBEBEBE;
  printf("Value a is\t\t0x%08X\n", a);

  /**/
  return 0; //Return an integer from a function
}
//--------------------------------------------------------
student addStudent (char ch[], unsigned int cr, unsigned int ag)
{
  student res_st;
  strcpy(res_st.nm, ch);
  res_st.course = cr;
  res_st.age = ag;
  student_counter++;
  return res_st;
}
//--------------------------------------------------------
