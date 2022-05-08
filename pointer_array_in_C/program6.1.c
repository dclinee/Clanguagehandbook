// program6.1.c
#include <stdio.h>

void my_function_A(void *ptr)
{
  char a[] = "ABCDE";
  printf("Address of a = %p\n", a);
}

void my_function_B(void *ptr)
{
  char *b = "FGHIJ";
  printf("Address of b = %p\n", b);
}
int main(void)
{
  my_function_A("address");
  my_function_B("address");

  return 0;

}
