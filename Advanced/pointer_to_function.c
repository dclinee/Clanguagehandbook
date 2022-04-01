/* pointer_to_function.c */
#include <stdio.h>

int sum(int x, int y)
{
  return x + y;
}

int main(void)
{
  int (*fp) (int, int);
  fp =sum;
  int result = fp(2, 3);
  printf("The sum of two number is : %d.\n", result);

  return 0;
}
