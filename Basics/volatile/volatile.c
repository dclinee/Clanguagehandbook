// volatile.c

#include <stdio.h>

void delay(void)
{
 volatile int i, j;
  for (i =0; i < 10000; i++)
    {
      for (j = 0; j < 100000; j++);
    }
}

int main(void)
{
  printf("Testing beginning.\n");
  delay();
  printf("Thesting ending.\n");

  return 0;
}
