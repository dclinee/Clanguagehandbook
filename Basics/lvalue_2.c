/* lvalue_2.c */
#include <stdio.h>
int main(void)
{
  int a = 10;
  int b;
  int *p;
  b = a + 1;
  p = &(a + 1);
  printf("p = %p\n", &(a + 1));

  return 0;
}
