// big_or_endian.c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *ptr = malloc(4);
  *ptr = 0x12345678;
  printf("%x\n", *(char*)ptr);

  return 0;
}
