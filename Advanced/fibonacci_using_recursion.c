/* Fibonacci series using recursion in C.*/
#include <stdio.h>
void fibonacci(int n)
{
  static int n1 = 0, n2 = 1, n3;
  if(n > 0)
    {
      n3 = n1  + n2;
      n1 = n2;
      n2 = n3;
      printf("%d ", n3);
      fibonacci(n - 1);
     }
}
int main(void)
{
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Fibonacci series:");
  printf("%d %d ",0, 1);
  fibonacci(n - 2);

  putchar('\n');

  return 0;
}
