/* Simple program to represent Pointer to a Pointer. */
#include <stdio.h>
int main(void)
{
  int a = 10;
  int *p_1 = NULL;
  int **p_2 = NULL;

  p_1 = &a;
  p_2 = &p_1;

  printf("Address of a = %p\n", &a);
  printf("Address of p_1 = %p\n", &p_1);
  printf("Address of p_2 = %p\n", &p_2);

  printf("Value at the address stored by p_1 = %d.\n", *p_1);
  printf("Value at the address stored by p_2 = %p.\n", *p_2);
  printf("Value at the address stored by p_2 = %d.\n", **p_2);
  return 0;
}
