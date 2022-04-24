/* function pointer and array exercise */
#include <stdio.h>

int add(int a, int b)
{
  return a + b;
}

int sub(int a, int b)
{
  return a - b;
}
int mult(int a, int b)
{
  return a * b;
}
int div(int a, int b)
{
  return a / b;
}
int main(void)
{
  int x, y;
  int choice = 0;
  int ret = 0;

  // define function pointer array
  int (*fp[4])(int x, int y) = {add, sub, mult, div};
  printf("Please choice(0~4): ");
  scanf("%d", &choice);
  printf("Please enter two integer numbers: ");
  scanf("%d %d", &x, &y);
  // call function pointer array
  ret = (*fp[choice])(x, y);
  printf("ret = %d\n", ret);
  return 0;
}
