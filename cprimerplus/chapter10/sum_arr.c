// sum_arr.c -- the sum of the elements of an array
#include <stdio.h>
int sum(int *arr, int n);
int main(void) {
  int marbles[10] = {0,1,2,3,4,5,6,7,8,9};
  int total = 0;
  total = sum(marbles, (sizeof(marbles)/sizeof(int)));
  printf("total = %d\n", total);
  return 0;
}

int sum(int *arr, int n) {
  int i;
  int total = 0;

  for(i = 0; i < n; i++) {
    total += arr[i];
  }
  return total;
}
