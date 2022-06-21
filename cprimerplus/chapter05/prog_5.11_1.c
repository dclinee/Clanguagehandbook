// prog_5.11_1.c
#include <stdio.h>
#define M_PRE_H 60
int main(void)
{
  int minutes;
  int hours;
  int left;
  printf("Please, enter minutes(minuutes <=0 eixt.): ");
  scanf("%d", &minutes);
  while (minutes > 0)
    {
      hours = minutes / M_PRE_H;
      left = minutes % M_PRE_H;
      printf("%d minutes is %d hours, %d minutes", minutes, hours, left);
      printf("Next input:\n");
      scanf("%d", &minutes);
    }
  printf("Done!\n");

  return 0;
}
