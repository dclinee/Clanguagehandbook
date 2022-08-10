// exer_2.11_8.c
#include <stdio.h>
int main(void)
{
  int a, b;
  a = 5;
  b = 2;
  printf("a = %d, b = %d\n", a, b);
  b = a;
  printf("a = %d, b = %d\n", a, b);
  a = b;
  printf("a = %d, b = %d\n", a, b);

  return 0;
}
