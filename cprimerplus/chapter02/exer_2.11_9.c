// exer_2.11_9.c
#include <stdio.h>
int main(void)
{
  int x, y;
  x = 10;
  y = 5;
  printf("x = %d, y = %d\n", x, y);
  y = x + y;
  printf("x = %d, y = %d\n", x, y);
  x = x * y;
  printf("x = %d, y = %d\n", x, y);
  return 0;
}
