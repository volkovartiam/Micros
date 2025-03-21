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
void print_str(const char *c_str);
void print_chars(const char *c_str);
void print_uint32_arr(const unsigned int *p_uint, unsigned int len);
//----------------------------------------------
int main()
{
  /*
  char str1[30] = {};
  strcpy(str1,"Hello, World!!!");
  print_str(str1);
  print_str("Second string");
  print_chars(str1);
  */
  /*
  unsigned int a[10] = {0x33333333, 0x44444444, 0x55555555, 0x66666666, 0x77777777, \
                        0x88888888, 0x99999999, 0xAAAAAAAA, 0xBBBBBBBB, 0xCCCCCCCC};
  print_uint32_arr(a, 10);
  */
  /*
  float res = .0;
  my_sum_p(4.44, 3.12, &res);
  printf("Valye sum is %f\n", res);
  my_div_p(10., 3., &res);
  printf("Valye div is %f\n", res);
  */
  /*
  student st;
  strcpy(st.nm, "Иванов Иван Иванович");
  st.age = 18;
  st.course = 2;
  printStudent(&st);
  */
  /*
  struct
  {
    char nm[60];
    unsigned char age;
    unsigned char course;
  } st;
  strcpy(st.nm, "Иванов Иван Иванович");
  st.age = 18;
  st.course = 2;
  printStudentvoid(&st);
  */
  student st[20];
  unsigned int st_cnt = 0;
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Иванов Иван Иванович", 2, 18);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Петров Петр Иванович", 1, 17);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Сидоров Александр Петрович", 4, 22);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Попов Иван Сергеевич", 3, 22);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Васильев Федор Николаевич", 5, 24);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Саблин Виктор Петрович", 1, 18);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Веселкин Алексей Алексеевич", 2, 18);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Трухин Сергей Сергеевич", 5, 23);
  for(int i=0; i<st_cnt; i++) printStudent(st+i);
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
