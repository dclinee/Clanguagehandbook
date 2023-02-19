// redefine_constant_variable.c

#include <stdio.h>
#define SIX 2*3
#define SIX 2*3  // define constant variable
#undef SIX
#define SIX 6

int main(void)
{
  printf("SIX = %d\n", SIX);
  return 0;
}
