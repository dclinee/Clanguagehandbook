// volatile.c
#include <stdio.h>
int main(void)
{
  volatile int value = 10;
  printf("value = %d\n", value);
  printf("The size of value = %lu\n", sizeof(value));
  return 0;
}
