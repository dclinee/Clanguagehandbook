// predefine_symbol.c
#include <stdio.h>
int main(void)
{
  printf("This file name is: %s\n", __FILE__);
  printf("The current line number is: %d\n", __LINE__);
  printf("The date is: %s\n", __DATE__);
  printf("The time is: %s\n", __TIME__);

  return 0;
}
