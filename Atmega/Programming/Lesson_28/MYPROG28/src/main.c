#include "main.h"
#include "ariph.h"
#include "utils.h"
#include "student.h"
//----------------------------------------------
unsigned char student_counter = 0;
//----------------------------------------------
float res;
char str1[30] = {};
float yf, zf;
//----------------------------------------------
//----------------------------------------------
int main()
{
/*
  struct student st1;
  strcpy(st1.nm, "Иванов Иван Иванович");
  st1.age = 18;
  st1.course = 2;
  struct student *st1_p = &st1;
  printf("%s,\t%d курс,\t%d лет\n", (*st1_p).nm, (*st1_p).course, (*st1_p).age);
  struct student st2;
  strcpy(st2.nm, "Перов Петр Иванович");
  st2.age = 17;
  st2.course = 1;
  struct student *st2_p = &st2;
  printf("%s,\t%d курс,\t%d лет\n", st2_p->nm, st2_p->course, st2_p->age);
  struct student st3;
  struct student *st3_p = &st3;
  strcpy(st3_p->nm, "Семенов Игорь Васильевич");
  st3_p->age = 20;
  st3_p->course = 3;
  printf("%s,\t%d курс,\t%d лет\n", st3_p->nm, st3_p->course, st3_p->age);
*/
/*
  struct student
  {
    char nm[60];
    unsigned char age;
    unsigned char course;
  } st;
  struct student *st_p;
  st_p = &st;
  strcpy(st_p->nm, "Иванов Иван Иванович");
  st_p->age = 18;
  st_p->course = 2;
  printf("%s,\t%d курс,\t%d лет", st_p->nm, st_p->course, st_p->age);
*/
  student st;
  student *st_p = &st;
  strcpy(st_p->nm, "Иванов Иван Иванович");
  st_p->age = 18;
  st_p->course = 2;
  printf("%s,\t%d курс,\t%d лет\n", st_p->nm, st_p->course, st_p->age);
  return 0; //Return an integer from a function
}
//--------------------------------------------------------
