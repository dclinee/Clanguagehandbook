// prog_5.11_3.c
#include <stdio.h>
#define DAYS_PRE_WEEKS 7
int main(void)
{
  int days, weeks, left;
  printf("Please enter your days(days <= 0 eixt!):");
  scanf("%d", &days);
  while (days > 0)
    {
      weeks = days / DAYS_PRE_WEEKS;
      left = days % DAYS_PRE_WEEKS;
      printf("%d days are %d weeks, %d days\n", days, weeks, left);
      printf("Next input(days <= 0 eixt!): ");
      scanf("%d", &days);
    }
  printf("\n");

  return 0;
}
