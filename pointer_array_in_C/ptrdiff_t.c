/* ptrdiff_t.c -- ptrdiff_t is a type of variable store the result of
  subtracting and adding pointers. */
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
/*
void add(void)
{
  int arr[4];
  ptrdiff_t diff = (&arr[1]) + (&arr[3]);
  printf("The result of adding is: %d\n", diff);
}
*/
void info(void)
{
  printf("PTRDIFF_MAX = %ld\n", PTRDIFF_MAX);
}
void sub(void)
{
  char arr[5] = {1, 2, 3, 4, 5};
  char *ptr = arr;

  printf("The result of subtracting is: %ld\n", &arr[4] - &arr[0]);
  printf("The result of subtracting is: %ld\n", &arr[0] - &arr[1]);
}
int main(void)
{
  // add();
  info();
  sub();

  return 0;
}
