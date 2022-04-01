/* pointer_to_array.c */
/*
 Use a pointer to an array, and then use that pointer
 to access the array elements.
*/
#include <stdio.h>

int main(void)
{
  int a[3] = {1, 2, 3};
  int *p = a;
  for(int i = 0; i < 3; i++)
    {
      printf("%d ", *p);
      p++;
    }

  return 0;
}
