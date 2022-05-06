//address_of_function.c for understand function pointer
#include <stdio.h>
void test()
{
  // test is testing function
  return ;
}
int main(void)
{
  int a = 5;
  printf("Address of variable = %p\n", &a);
  printf("Address of function = %p\n", test);

  return 0;
}
