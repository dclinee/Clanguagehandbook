// constant_char_pointer.c
#include <stdio.h>

int main(void)
{
  char variable1 = 'X';
  char variable2 = 'Y';
  const char *pointer = &variable1;

  printf("Current value of the pointer is:%c\n", *pointer);

  pointer = &variable2;
  printf("Current value of the pointer is:%c\n", *pointer);
  return 0;
}
