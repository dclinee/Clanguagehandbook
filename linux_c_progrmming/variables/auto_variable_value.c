// auto_variable_value.c
#include <stdio.h>
void func(void)
{
  int x = 0;
  x++;
  printf("x = %d, address = %p\n", x, &x);
}
int main(void)
{
  func();
  func();
  func();
  return 0;
}
