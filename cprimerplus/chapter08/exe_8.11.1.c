// exe_8.10.1.c
#include <stdio.h>

int main(void)
{
  char ch;
  putchar(getchar());
  printf("\n");
  //  getchar(putchar(ch));  too many arguments to function call
  return 0;
}
