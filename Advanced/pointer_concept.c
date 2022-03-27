/* The concept of pointer in C language. */

#include <stdio.h>

int main(void)
{
  int a = 100;
  int *p = &a;
  int **q = &p;

  printf("a = %d\n", a);
  printf("&a = %p\n", &a);
  printf("p = %p\n", p);
  printf("*p = %d\n", *p);
  printf("&p = %p\n", &p);
  printf("q = %p\n", q);
  printf("&q = %p\n", &q);
  printf("*q = %p\n", *q);
  printf("**q = %d\n", **q);

  if(p == &a)
    printf("The p pointe to int variable a.\n");
  else
    printf("Flase.\n");
  if((int *)&p != &a)
    printf("The p is anoter variable, usually called pointer variable.\n");
  else
    printf("The p the same variable as int a.\n");

  printf("sizeof(a) = %lu\n", sizeof(a));
  printf("sizeof(&a) = %lu\n", sizeof(&a));
  printf("sizeof(int) %lu\n", sizeof(int));
  if(sizeof(a) == sizeof(int))
    printf("The size of int variable is %lu bytes.\n", sizeof(int));
  else
    printf("Flase.\n");
  printf("sizeof(p) = %lu\n", sizeof(p));
  printf("sizeof(*p) = %lu\n", sizeof(*p));
  printf("sizeof(&p) = %lu\n", sizeof(&p));
  printf("sizeof(q) = %lu\n", sizeof(q));
  printf("sizeof(&q) = %lu\n", sizeof(&q));
  printf("sizeof(int *) = %lu\n", sizeof(int *));
  printf("sizeof(int **) = %lu\n", sizeof(int **));
  if(sizeof(p) == sizeof(&p) && sizeof(p) == sizeof(&a))
    printf("The pointer variable is %lu bytes.\n", sizeof(p));

  if(sizeof(int *) == sizeof(int **) && sizeof(p) == sizeof(q))
    printf("The size of pointer is conatany size: %lu bytes.\n", sizeof(p));
  return 0;
}
