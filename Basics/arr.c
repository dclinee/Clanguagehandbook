//arr.c for array address representation
#include <stdio.h>
int main(void) {
  // array declaration and initialization
  int arr[5] = {1, 2, 3, 4, 5};
  // printing the address and value by representation of arr , &arr and &arr[0]
  printf("address is: %u, value is: %d\n", arr, *arr);
  printf("address is: %u, value is: %d\n", &arr, *(arr));
  printf("address is: %u, value is: %d\n", &arr[0], *(&arr[0]));

  return 0;
}
