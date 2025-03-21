#ifndef STUDENT_H_
#define STUDENT_H_
//------------------------------------------------
#include <stdio.h>
#include <string.h>
//------------------------------------------------
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
//------------------------------------------------
void printStudent (student *st_ptr);
void printStudentvoid (void *st_ptr);
void addStudent (student *res_st, unsigned int *student_counter,
                 char *ch, unsigned int cr, unsigned int ag);
//------------------------------------------------
#endif /* STUDENT_H_ */
