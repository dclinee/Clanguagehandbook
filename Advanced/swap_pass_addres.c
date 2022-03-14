#include <stdio.h>
void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;

  printf("*x = %d, *y = %d\n", *x, *y);
  printf("x = %p, y = %p\n", x, y);
}
int main(void)
{
  int a = 10;
  int b = 20;
  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);
  printf("&a = %p, &b = %p\n", &a, &b);

  return 0;
}
