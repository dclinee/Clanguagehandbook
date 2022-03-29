/* add_two_num.c */
#include <stdio.h>
int x;
int y;
int add_two_num()
{
  extern int x;
  extern int y;
  x = 1;
  y = 2;

  return x + y;
}
int main(void)
{
  int result;
  result = add_two_num();

  printf("result = %d\n", result);
  return 0;
}
