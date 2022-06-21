// prog_5.11_6.c
#include <stdio.h>
void sum_money_days(int n);
int main(void)
{
  int number;
  printf("Enter a number for days: ");
  scanf("%d", &number);
  sum_money_days(number);
  return 0;
}

void sum_money_days(int n)
{
  int count = 0;
  int sum = 0;
  while (count++ < n)
    {
      sum = sum + count * count;
    }
  printf("%d\n", sum);
}
