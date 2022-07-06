// assignment_for_elements_of_arrays.c
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void)
{
  int counter, evens[SIZE];

  for(counter = 0; counter < SIZE; counter++)
    {
      evens[counter] = 2 * counter;
    }
  for(int i = 0; i < SIZE;  i++)
    {
      printf("evens[%d] = %d\n", i, evens[i]);
    }

  exit(0);
}
