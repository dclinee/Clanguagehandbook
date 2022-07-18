// bubble_sort.c -- bubble sort with array
#include <stdio.h>
#include <stdlib.h>
#define SIZE     10
static void bubble_sort(void);
int main(void)
{

  bubble_sort();
  exit(0);
}

static void bubble_sort(void)
{
  int i, j, temp;
  int arr[SIZE] = {11, 22, 32, 14, 55, 88, 33, 98, 65, 78};
  for (i = 0; i < SIZE; i++)
    {
      printf("%d ", arr[i]);
    }
  printf("\n");

  for (i = 0; i < SIZE -1; i++)
    {
      for (j = 0; j < SIZE -1 -i; j++)
        {
          if(arr[j] > arr[j + 1])
            {
              temp = arr[j];
              arr[j] = arr[j + 1];
              arr[j + 1] = temp;
            }
        }
    }
  for (i = 0; i < SIZE; i++)
    {
      printf("%d ", arr[i]);
    }
  printf("\n");

}
