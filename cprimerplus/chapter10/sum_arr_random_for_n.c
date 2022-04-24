// sum_arr_random_for_n.c -- the sum of the elements of an array
#include <stdio.h>
#define SIZE 10
int sum(int *arr, int n); // function prototype
int main(void) {
  int marbles[SIZE];
  // Initialization marbles from STDIO
  printf("Ender %d ingegr number:\n", SIZE);
  for (int i = 0; i < SIZE; i++)
    {
      scanf("%d", &marbles[i]);
    }
  // Output the elemnts of the marbles[i] for testing
  for(int i = 0; i < SIZE;  i++)
    {
      printf("marbles[%d] = %d\n", i, marbles[i]);
    }
  int total = 0;
  // function call
  total = sum(marbles, (sizeof(marbles)/sizeof(int)));
  printf("total = %d\n", total);
  return 0;
}

int sum(int *arr, int n) {
  int i;
  int total = 0;

  for(i = 0; i < n; i++) {
    //total += arr[i];
    total += *(arr + i);
    //*(arr + i) == arr[i];
  }
  return total;
}
