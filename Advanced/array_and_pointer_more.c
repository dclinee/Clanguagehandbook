/* array_and_pointer_more.c */
#include <stdio.h>
int main(void)
{

  int a[3][4][5][6] = {10};

  printf("a[0][0][0][0] = %d\n", a[0][0][0][0]);

  printf("a = %d\n", a);
  printf("&a = %d\n", &a);
  printf("a[0] = %d\n", a[0]);
  printf("a[0][0][0] = %d\n", a[0][0][0]);


}
