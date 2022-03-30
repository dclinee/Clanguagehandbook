/* lvalue.c */
#include <stdio.h>

int main(void)
{
  int a;
  int b;
  &a = &b;
  printf("&a = %p, &b = %p", &a, &b);
  return 0;
}
