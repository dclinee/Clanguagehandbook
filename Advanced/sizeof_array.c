/* sizeof_array.c */
#include <stdio.h>
int main(void)
{
  int a[3] = {10};

  printf("sizeof(a) = %d\n", sizeof(a));
  printf("sizeof(a+1-1) = %d\n", sizeof(a+1-1));
  return 0;
}
