// max_three_numbers.c
#include <stdio.h>

int main(void)
{
  int a = 1;
  int b = 100;
  int c = 1000;

  int ret_max = (a > b && a > c) ? (a > b ? a : b) : (a > c ? a : c);
  printf("The max number of threee numbers: %d\n", ret_max);

  return 0;
}
