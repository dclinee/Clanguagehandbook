// prog_5.11_7.c
#include <stdio.h>
void cube_func(double number);

int main(void)
{
  double x;
  printf("Enter double type nbuber x: ");
  scanf("%lf", &x);
  cube_func(x);

  return 0;
}

void cube_func(double number)
{
  printf("cube of number %lf\n", (number * number * number));
}
