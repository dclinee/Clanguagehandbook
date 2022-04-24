// The address of the array.

#include <stdio.h>
int main(void)
{
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int *p = NULL;
  int *q = NULL;
  // anme of arrray is address of the first element
  if(arr == &arr[0])
    printf("Ture.\n");
  else
    printf("False.\n");
  printf("arr = %p, &arr[0] = %p\n", arr, &arr[0]);

  //arr and &arr[1] assigned as values to pointer variables
  p = arr;
  q = &arr[0];
  printf("p = %p, q = %p\n", p, q);


  return 0;
}
