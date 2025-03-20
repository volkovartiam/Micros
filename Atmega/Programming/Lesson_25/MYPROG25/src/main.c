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
/*
  student st1;
  strcpy(st1.nm, "Иванов Иван Иванович");
  st1.age = 18;
  st1.course = 2;
  printf("%s,\t%d курс,\t%d лет", st1.nm, st1.course, st1.age);
  printf("\n");
  student st2;
  strcpy(st2.nm, "Перов Петр Иванович");
  st2.age = 17;
  st2.course = 1;
  printf("%s,\t%d курс,\t%d лет", st2.nm, st2.course, st2.age);
*/
  student st[20];
/*
  strcpy(st[0].nm, "Иванов Иван Иванович");
  st[0].age = 18;
  st[0].course = 2;
  strcpy(st[1].nm, "Петров Петр Иванович");
  st[1].age = 17;
  st[1].course = 1;
  strcpy(st[2].nm, "Сидоров Александр Петрович");
  st[2].age = 22;
  st[2].course = 4;
  for(int i=0; i<3; i++)
  printf("%-30s%d курс\t%d лет\n", st[i].nm, st[i].course, st[i].age);
*/
  if(student_counter<20) st[student_counter] = addStudent("Иванов Иван Иванович", 2, 18);
  if(student_counter<20) st[student_counter] = addStudent("Петров Петр Иванович", 1, 17);
  if(student_counter<20) st[student_counter] = addStudent("Сидоров Александр Петрович", 4, 22);
  if(student_counter<20) st[student_counter] = addStudent("Попов Иван Сергеевич", 3, 22);
  if(student_counter<20) st[student_counter] = addStudent("Васильев Федор Николаевич", 5, 24);
  if(student_counter<20) st[student_counter] = addStudent("Саблин Виктор Петрович", 1, 18);
  if(student_counter<20) st[student_counter] = addStudent("Веселкин Алексей Алексеевич", 2, 18);
  if(student_counter<20) st[student_counter] = addStudent("Трухин Сергей Сергеевич", 5, 23);
  for(int i=0; i<student_counter; i++)
  printf("%-30s%d курс\t%d лет\n", st[i].nm, st[i].course, st[i].age);












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
