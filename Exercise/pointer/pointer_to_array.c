/*pointer to array.*/
#include <stdio.h>
int main(void)
{
  /*an array with 5 elements.*/
  double balance[5] = {100.0, 100.0, 100.0, 12.0, 1.0};
  double *p = balance;

  /*output every element's value.*/
  printf("Array value using pointer.\n");
  for(int i = 0; i < 5; i++)
    printf("*(p + %d) = %f\n", i, *(p + i));

  printf("Array value using balance as address.\n");
  for(int i = 0; i < 5; i++)
    printf("*(balance + %d) = %f\n", i, *(balance + i));

  return 0;
}
