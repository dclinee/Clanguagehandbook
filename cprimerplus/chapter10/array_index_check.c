// array_index_check.c -- check array index
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int main(void)
{
  int arr[SIZE];
  for (int i = 0; i < SIZE; i++)
    {
      *(arr + i) = 2 * i + 1;
    }
  for (int i = 0; i <= SIZE; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
        if (i >= SIZE)
             {
               fprintf(stderr, "index of arr exceed the size of array.\n");
               exit(1);
             }
    }

  return 0;
}
