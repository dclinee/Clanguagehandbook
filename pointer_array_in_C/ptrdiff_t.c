// ptrdiff_t.c -- contained the result of two points sub opteration
#include <stdio.h>

int main(void)
{
  char arr[5] = {1, 2, 3, 4, 5};
  char *ptr = arr;

  printf("%d\n", &arr[4] - &arr[0]);

  return 0;
}
