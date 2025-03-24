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
  unsigned int *print_str_addr;
  print_str_addr = (unsigned int *)print_str;
  printf("0x%08X\n",(unsigned int)print_str_addr);


  /*
  void (*print_str_new)(const char *c_str);
  print_str_new = (void*)print_str_addr;
  print_str_new("Hello, World!!!");
  */

  /*
  void (*print_str_new)(const char *c_str);
  print_str_new =  print_str;
  print_str_new("Hello, World!!!");
  void (*print_str_new)(const char *c_str) = print_str;
  print_str_new("Hello, World!!!");
  */

  /*
  void (*arith_operations[4])(float, float, float *) = {my_sum_p, my_sub_p, my_mul_p, my_div_p};
  float a = 3., b = 5., res = .0;
  for(unsigned char i=0; i<4; i++)
  {
    arith_operations[i](a, b, &res);
    printf("Valye oeration %hd is %f\n", i, res);
  }
  */


  student st[20];
  unsigned int st_cnt = 0;
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Иванов Иван Иванович", 2, 18);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Петров Петр Иванович", 1, 17);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Иванова Елена Павловна", 4, 22);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Попов Иван Сергеевич", 3, 22);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Васильев Федор Николаевич", 5, 24);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Саблин Виктор Петрович", 1, 18);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Веселкин Алексей Алексеевич", 2, 18);
  if(st_cnt<20) addStudent(st+st_cnt, &st_cnt, "Трухин Сергей Сергеевич", 5, 23);
  for(int i=0; i<st_cnt; i++) {printf("%d\t", i); printStudent(st+i);}
  printf("\n");


  student_list st_list =
  {
    st,
    addCourse,
    addAge,
    modifyName,
    deletePos
  };
  st_list.addCourse(st+5);
  st_list.addAge(st+1);
  st_list.modifyName(st+2, "Петрова Елена Павловна");
  for(int i=0; i<st_cnt; i++) {printf("%d\t", i); printStudent(st+i);}
  printf("\n");

  /**/
  st_list.deletePos(st, 4, &st_cnt);
  for(int i=0; i<st_cnt; i++) {printf("%d\t", i); printStudent(st+i);}
  /**/


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
