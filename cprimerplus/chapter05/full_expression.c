// full_expression.c
#include <stdio.h>
int main(void)
{
  int x = 0, y;

  // 4 + x++ not full expression
  y = (4 + x++) + (6 + x++);
  printf("y = %d\n", y);

  return 0;
}
