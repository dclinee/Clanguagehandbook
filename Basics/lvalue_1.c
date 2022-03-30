/* lvalue_1.c */
#include <stdio.h>

int main(void)
{
  float *b;
  float d;
  b = &d;
  printf("b = %p\n", b);
  return 0;
}
