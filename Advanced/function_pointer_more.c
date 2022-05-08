// function pointer demo
#include <stdio.h>

int sum(int a, int b)
{
  return a + b;
}

int sub(int a, int b)
{
  return a - b;
}

int sum_of_squares(int a, int b)
{
  return (a*a + b*b);
}

int mystery(int a, int b, int (*fn)(int,int))
{
  return ((*fn)(a, b));
}
int main(void)
{


  printf("%d\n", mystery(10, 12, sum));
  printf("%d\n", mystery(10, 12, sub));
  printf("%d\n", mystery(10, 12, sum_of_squares));

  return 0;
}
