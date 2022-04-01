/* larger_two_num_int.c */
#include <stdio.h>
int larger(int, int);

int main(void)
{

  int a = 15;
  int b = 92;
  int result;
  result = larger(a, b);
  printf("%d is larger.\n", result);
  return 0;
}

int larger(int x, int y)
{

  if(x > y)
    return x;
  else
    return y;
}
