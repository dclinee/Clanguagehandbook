// array_define.c
#include <stdio.h>
#include <stdlib.h>
#define SIZE     10
void auto_array(void);
void static_array(void);

int main(void)
{
  printf("*********Here was auto_array() information*********\n");
  auto_array();
  printf("*********Here was static_array() information*********\n");
  static_array();

  exit(0);
}

void auto_array(void)
{
  auto int arr[SIZE];
  // [storge-class] array-name[array-size];

  // the size of array
  printf("The size of the array = %lu\n", sizeof(arr));
  // the address of the array
  printf("The address of the array = %p\n", &arr);
  printf("The address of the array = %p\n", &arr);
  printf("The address of the array = %p\n", &arr[0]);
  // the elements of the array
  for(int i = 0; i < SIZE; i++)
    {
      printf("The value of arr[%d] at the address %p is  %d\n",
             i, &arr[i], arr[i]);
    }

  return ;
}

void static_array(void)
{
  static int arr[SIZE];
  // [storge-class] array-name[array-size];

  // the size of array
  printf("The size of the array = %lu\n", sizeof(arr));
  // the address of the array
  printf("The address of the array = %p\n", &arr);
  printf("The address of the array = %p\n", &arr);
  printf("The address of the array = %p\n", &arr[0]);
  // the elements of the array
  for(int i = 0; i < SIZE; i++)
    {
      printf("The value of arr[%d] at the address %p is  %d\n",
             i, &arr[i], arr[i]);
    }

  return ;
}
