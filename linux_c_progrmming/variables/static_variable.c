// static_variable.c
#include <stdio.h>
int main(void)
{
  static int i;
  static int j;
  static int *k;

  printf("j = %d\n", j);
  printf("i = %d\n", i);
  printf("k = %p\n", k);

  return 0;
}
