// ifnfef.c
#include <stdio.h>
#define YEAR 100
#ifndef YEAR
#define YEAR 99
#endif

int main(void)
{
  printf("Your year is %d.\n", YEAR);
  return 0;
}
