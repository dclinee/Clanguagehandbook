// assignment_operator.c
#include <stdio.h>
int main(void)
{
  int number = 100;
  printf("number = %d\n", number);

  number += 1;
  printf("number = %d\n", number);

  number -= 1;
  printf("number = %d\n", number);

  number *= 2;
  printf("number = %d\n", number);

  number /= 2;
  printf("number = %d\n", number);

  number %= 2;
  printf("number = %d\n", number);

  number++;
  printf("number = %d\n", number);

  ++number;
  printf("number = %d\n", number);

  number--;
  printf("number = %d\n", number);

  --number;
  printf("number = %d\n", number);

  return 0;
}
