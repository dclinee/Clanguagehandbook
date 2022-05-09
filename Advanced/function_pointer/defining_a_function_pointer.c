// Defing a function pointer for defing_a_function_pointer.c
#include <stdio.h>
int sum(int x, int y){ return x + y;}
int sub(int x, int y){ return x - y;}
int sum_of_squares(int x, int y){ return x*x + y*y; }
int mystery(int x, int y, int(*fn)(int, int))
{ return ((*fn)(x, y));}

int main()
{
  printf("%d\n", mystery(10, 10, sum));
  printf("%d\n", mystery(10, 10, sub));
  printf("%d\n", mystery(10, 10, sum_of_squares));

  return 0;
}
