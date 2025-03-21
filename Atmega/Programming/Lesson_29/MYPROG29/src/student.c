#include "student.h"
//--------------------------------------------------------------------------
void printStudent (student *st_ptr)
{
  printf("%-30s%d ����\t%d ���\n", st_ptr->nm, st_ptr->course, st_ptr->age);
}
//--------------------------------------------------------------------------
void printStudentvoid (void *st_ptr)
{
  typedef struct
  {
    char nm[60];
    unsigned char age;
    unsigned char course;
  } stdn;
  printf("%s,\t%d ����,\t%d ���\n", ((stdn*)st_ptr)->nm, ((stdn*)st_ptr)->course, ((stdn*)st_ptr)->age);
}
//--------------------------------------------------------------------------
void addStudent (student *res_st, unsigned int *student_counter,
                 char *ch, unsigned int cr, unsigned int ag)
{
  strcpy(res_st->nm, ch);
  res_st->course = cr;
  res_st->age = ag;
  (*student_counter)++;
}
//--------------------------------------------------------------------------
