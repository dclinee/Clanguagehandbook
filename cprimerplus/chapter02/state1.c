/* state1.c */
#include <stdio.h>
int main(void)
{
  int x, y;

  x = 10;
  y = 5;
  y = x + y;
  x = x * y;
  printf("%d %d\n", x, y);

  return 0;
}
