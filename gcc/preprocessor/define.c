// define.c
#include <stdio.h>
#define YEAR 2022
#define MONTH "july"
#define DAY (2022 / 2)
int main(void)
{
  printf("%d %s %d\n", YEAR, MONTH, DAY);

  return 0;
}
