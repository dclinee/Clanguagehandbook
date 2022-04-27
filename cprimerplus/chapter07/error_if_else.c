// error_if_else.c
#include <stdio.h>
int main(void)
{
  int x = 10;
  if(x > 0)
    {printf("Incrementing x: \n");
      x++;
      printf(" %d\n", x);
    }
  else
    printf("x <= 0\n");

  return 0;
}
