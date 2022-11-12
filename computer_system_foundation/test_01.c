// test_01.c
#include <stdio.h>
int main(void)
{
  if(-2147483648 > 2147483647)
    printf("Ture!\n");
  else
    printf("False!\n");

  return 0;
}
