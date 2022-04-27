/*Find out (add code to print out) the address of the variable x in foo1,
  and the variable y in foo2. What do you notice? Can you explain this*/
// exer_p2.c
#include <stdio.h>
void foo1(int x_val)
{
  int x;
  x = x_val;
  printf("The address of the x is %p, the value is %d\n", &x, x);
}
void foo2(int dummp)
{
  int y;
  printf("The address of the y is %p, the value is %d\n", &y, y);
}
int main(void)
{
  foo1(7);
  foo2(22);

  return 0;
}
