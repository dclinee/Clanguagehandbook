// iterating through an array using pointer

#include <stdio.h>
#define SIZE 10
int main(void)
{
  size_t i = 0;
  int *ptr = NULL;
  int arr[SIZE];

  /* Setting up the values to be i*i */
  for(i = 0; i < SIZE; i++)
    {
      arr[i] = i * i;
}
  for(ptr = arr; ptr < SIZE + arr; ptr++)
    {
      printf("%d\n", *ptr);
}
  return 0;
}
