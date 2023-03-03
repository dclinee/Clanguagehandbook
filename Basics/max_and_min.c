// max_and_min.c
#include <stdio.h>
int max(int a, int b)
{
  if(a > b)
    return a;
  else
    return b;
}

int min(int a, int b)
{
  if(a < b)
    return a;
  else
    return b;
}

int main(void)
{
  int a = 1;
  int b = 100;

  int ret_max = max(a, b);
  int ret_min = min(a, b);

  printf("The ret_max is: %d\n", ret_max);
  printf("The ret_min is: %d\n", ret_min);

  return 0;
}
