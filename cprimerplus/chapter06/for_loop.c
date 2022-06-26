// for_loop.c
#include <stdio.h>
int main(void)
{
  #if 0
  for(initialize expression; test expression; update expression)
    statement;
  #endif
  for(int n = 0; n < 10; n++)
    printf(" %d %d\n", n, 2 * n + 1);
  return 0;
}
