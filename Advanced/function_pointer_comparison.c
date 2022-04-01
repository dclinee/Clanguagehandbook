/* Here is C code to demonstrate the working of function pointer. */
#include <stdio.h>
#include <stdlib.h>

int comparison(const void* lhs, const void* rhs)
{
  return (*(int *)rhs - *(int *)lhs);
}

int main(void)
{
  int (*cmp)(const void*, const void*);
  cmp = &comparison;
  int array[] = {15, 42, 93, 54, 15, 66, 37, 8, 81};
  qsort(array, sizeof(array) / sizeof(*array), sizeof(*array), cmp);
  int x = 0;
  while(x < sizeof(array) / sizeof(*array))
    {
      printf("%d\t", array[x]);
      x++;
    }

  return 0;
}
