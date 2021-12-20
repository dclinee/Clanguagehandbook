#include <stdio.h>
int main(void)
{
  int n = 3;
  while(n)
    printf("%2d is true.\n", n--);
  printf("%2d is false.\n", n);

  int m = -3;
  while(m)
    printf("%2d is true.\n", m++);
  printf("%2d is false.\n", m);

  return 0;
}
