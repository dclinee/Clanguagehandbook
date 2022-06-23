// while.c
#include <stdio.h>
#define LEFT 1
#define RIGHT 100

int main(void)
{
  int i = LEFT;
  int sum = 0;
  while(i <= RIGHT)
    {
      sum = sum + i;
      i++;
}
  printf("sum = %d\n", sum);
  return 0;
}
