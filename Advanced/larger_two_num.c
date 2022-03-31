/* larger_two_num.c */
#include <stdio.h>
int* larger(int*, int*);
int main(void)
{

  int a = 15;
  int b = 92;
  int *p;
  p = larger(&a, &b);
  printf("%d is larger.\n", *p);
  return 0;
}

int* larger(int *x, int *y)
{
  if(*x > *y)
    return x;
  else
    return y;
}
