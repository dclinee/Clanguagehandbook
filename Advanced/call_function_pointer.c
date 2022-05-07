// function opinter call
#include <stdio.h>
int sum(int a, int b)
{
  return a + b;
}
int main(void)
{
  int (*fd)(int, int);
  fd = sum; // the same fd = &sum
  int result = sum(12, 12);
  int ret = fd(12, 12); // the smae (*fd)(12, 12)
  printf("%d\n", result);
  printf("%d\n", ret);

  printf("Address of sum = %p\n", sum);
  printf("Address of *sum = %p\n", *sum);
  printf("Address of &sum = %p\n", &sum);

  return 0;
}
