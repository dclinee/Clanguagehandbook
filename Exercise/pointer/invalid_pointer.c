// invalid_pointer.c
#include <stdio.h>
int *func()
{
  static int arr[10] = {12, 23, 34, 45, 56, 67, 78, 89, 99, 100};
  return arr;
}
int main(void)
{
  int *ptr = func();
  for (int i = 0; i < 10; i++)
    {
      printf("%p -> %d\n", ptr, *ptr);
      ptr++;
    }

  return 0;
}
