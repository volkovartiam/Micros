#include "main.h"
#include "ariph.h"
#include "utils.h"
#include "student.c"

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
  struct student
  {
	char nm[60];
	unsigned char age;
	unsigned char course;
  } st;

  struct student st1;
  strcpy(st1.nm, "Иванов Иван Иванович");
  st1.age = 18;
  st1.course = 2;
  struct student *st1_p = &st1;
  printf("%s,\t%d курс,\t%d лет\n", (*st1_p).nm, (*st1_p).course, (*st1_p).age);
  printf("%s,\t%d курс,\t%d лет\n", st1_p->nm, st1_p->course, st1_p->age);
  */


  student st1;
  strcpy(st1.nm, "Иванов Иван Иванович");
  st1.age = 18;
  st1.course = 2;
  student *st1_p = &st1;
  printf("%s,\t%d курс,\t%d лет\n", st1_p->nm, st1_p->course, st1_p->age);


  student st2;
  strcpy(st2.nm, "Перов Петр Иванович");
  st2.age = 17;
  st2.course = 1;
  student *st2_p = &st2;


  printf("%s,\t%d курс,\t%d лет\n", st2_p->nm, st2_p->course, st2_p->age);
  student st3;
  student *st3_p = &st3;
  strcpy(st3_p->nm, "Семенов Игорь Васильевич");
  st3_p->age = 20;
  st3_p->course = 3;
  printf("%s,\t%d курс,\t%d лет\n", st3_p->nm, st3_p->course, st3_p->age);


  strcpy(st3_p->nm, "Иванов Иван Иванович");
  st3_p->age = 20;
  st3_p->course = 2;
  printf("%s,\t%d курс,\t%d лет", st3_p->nm, st3_p->course, st3_p->age);


  return 0; //Return an integer from a function
}
//--------------------------------------------------------
