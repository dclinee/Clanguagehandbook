// ternary_operator.c
#include <stdio.h>

int ternary_operator_function(int a, int b)
{
  int ret = (a > b) ? a : b;

  return ret;
}

int main(void)
{
  int a, b;
  printf("Please enter 2 number: ");
  printf("\n");

  scanf("%d%d", &a, &b);
  int largest_num = ternary_operator_function(a, b);
  printf("The largest_num is: %d\n", largest_num);

  return 0;
}
