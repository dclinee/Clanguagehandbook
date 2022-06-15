// cast_operator.c
#include <stdio.h>
int main(void)
{
  int mice;
  // auto change
  mice = 1.6 + 1.7;
  printf("mice = %d\n",mice);
  // cast operator
  mice = (int)1.6 + (int)1.7;
  printf("mice = %d\n",mice);

  return 0;
}
