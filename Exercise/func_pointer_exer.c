/* function pointer exercise */

#include <stdio.h>

int add(int a, int b)
{
  return a + b;
}

int main(void)
{
  int m = 10, n = 100;
  int (*fp)(int, int) = add;
  printf("%d\n", fp(m, n));
  return 0;
}
