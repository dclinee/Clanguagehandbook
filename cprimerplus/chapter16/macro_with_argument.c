// macro_with_argument.c

#include <stdio.h>
#define SQUARE(x) x*x

int main(void)
{
  int ret = SQUARE(2);
  printf("ret = %d\n", ret);

  return 0;
}
