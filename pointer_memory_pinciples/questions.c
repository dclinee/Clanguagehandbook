// questions.c -- pointer and memory pinciples
// basic concept of memory
#include <stdio.h>
#include <stdlib.h>

void question_one(void);
void question_two(void);
void question_three(void);
void question_four(void);


int main(void)
{
  question_four();
  question_three();
  question_two();
  question_one();
  exit(0);
}
void question_four(void)
{
  int a[3][4][5][6] = {10};

  printf("a[0][0][0][0]\n", a[0][0][0][0]);

  printf("a = %d\n", a);
  printf("&a = %d\n", &a); // type int (*) [3][4][5][6]
  printf("a[0] = %d\n", a[0]); // type int (*) [4][5][6]
  printf("a[0][0] = %d\n", a[0][0]);// type int (*) [5][6]
  printf("a[0][0][0] = %d\n", a[0][0][0]); // type int (*) [6]
}

void question_three(void)
{
  int a[3][4] = {10};

  printf("a[0][0] = %d\n", a[0][0]);
  printf("a = %d\n", a);
  printf("&a = %d\n", &a);
  printf("a[0] = %d\n", a[0]);
  printf("a[1] = %d\n", a[1]);
  printf("a[1] - a[0] = %d\n", a[1] - a[0]);
}

void question_two(void)
{
  int a[3] = {10}; // derived type , a is array_name type is :int [3]
  printf("sizeof(int[3]) = %lu\n", sizeof(int[3]));
  //printf("sizeof int[3] = %lu\n", sizeof int[3]);
  int *p = &a[0];

  printf("a[0] = %d\n", a[0]);

  printf("a = %d\n", a);
  printf("&a = %d\n", &a);
  printf("p = %d\n", p);
}

void question_one(void)
{
  int a = 10;             // type of a is int
  int* p = &a;            // type os p is int *

  printf("a = %d\n", a);
  printf("&a = %d\n", &a);
  printf("p = %d\n", p);

  printf("sizeof(int) = %lu\n", sizeof(int));
  //printf("sizeof int = %lu\n", (sizeof int));
  printf("sizeof a = %lu\n", sizeof a);
  printf("sizeof(int *) = %lu\n", sizeof(int *));
}
