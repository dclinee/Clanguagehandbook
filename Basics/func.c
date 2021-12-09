#include <stdio.h>
int sum(int num1 ,int num2)
{
  int i, sum = 0;
  for(i = num1; i <= num2; i++)
    sum = sum + i;
  return sum;
}
int main(void)
{
  printf("sum of 1 to 10: %d\n", sum(1,10));
  printf("sum of 23 to 33: %d\n", sum(23,33));
  return 0;
}
