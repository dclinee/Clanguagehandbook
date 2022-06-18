// exer_5.11_12.c
#include <stdio.h>
int main(void)
{
  int x = 0;
  int a = x + 10;
  int b = x + 1;
  int c = 2 * ( a + b);
  int d = a + 2 * b;

  printf("x = %d, a = %d, b = %d, c = %d, d = %d\n", x, a, b, c, d);

  return 0;
}
