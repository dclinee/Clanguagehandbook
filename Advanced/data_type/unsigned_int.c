#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  unsigned int a = 10;
  int b = 20;

  if (b - a < 0)
    {
      printf("b - a 是负数.\n");
    }
  else
    {
      printf("b - a 是非负数.\n");
    }

  exit(0);
}
