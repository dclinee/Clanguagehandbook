// ptrdiff_t.c
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

int main(void)
{
  const size_t n = 100;
  int number[n];

  printf("PTRDIFF_MAX = %ld\n", PTRDIFF_MAX);
  int *p1 = &number[18];
  int *p2 = &number[23];
  ptrdiff_t diff = p1 - p2;
  printf("p1-p2 = %ld\n", diff);
  ptrdiff_t v_diff = p2 - p1;
  printf("p2 - p1: %ld\n", v_diff);

  return 0;
}
