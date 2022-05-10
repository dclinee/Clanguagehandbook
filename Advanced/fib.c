// fib.c
#include <stdio.h>

int fib(int n)
{
  if(n == 0) return 0;
  else if (n == 1) return 1;
  else
    {
      return fib(n - 1) + fib(n - 2);
    }
}
int main(void)
{
  int i, n, sum = 0;
  printf("Please enter number n: ");
  scanf("%d", &n);
  for(i = 0; i <= n; i++)
    {
      printf("index[%d] = %d\n", i, fib(i));
      sum = sum + fib(i);
    }
  printf(" sum = %d\n", sum);
  return 0;
}
