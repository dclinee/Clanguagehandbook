/* array_and_pointer.c */
#include <stdio.h>
int main(void)
{

  int a[3][4] = {10};

  printf("a[0][0] = %d\n", a[0][0]);
  printf("a = %d\n", a);
  printf("&a = %d\n", &a);
  printf("a[0] = %d\n", a[0]);

}
