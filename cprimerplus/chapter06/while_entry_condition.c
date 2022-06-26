// while_entry_condition.c
#include <stdio.h>

int main(void)
{
  int inder = 10;
  // entry conditon can not into while loop(index = 11 > 5)
  while(inder++ < 5)
    {
      printf("Have a fair day or better.\n");
    }

  return 0;
}
