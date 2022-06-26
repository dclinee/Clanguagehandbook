// for_cube2.c -- create a table of cube with input from user
#include <stdio.h>
int main(void)
{
  int number;
  printf("    n    n cubed\n");
  for(int number = 1; number*number*number <= 216; number++)
    {
      printf("%5d %5d\n", number, number*number*number);
    }
  return 0;
}
