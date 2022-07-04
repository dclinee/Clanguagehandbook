// array_initializ.c
#include <stdio.h>
#include <stdlib.h>
#define SIZE     10
void init_whole_array(void);
void init_part_array(void);
void init_no_array(void);
void beyond_array_size(void);

int main(void)
{
  // Initialized the whole elements of one array
  init_whole_array();
  // Initialized the part elements of one array
  init_part_array();
  // Initialized  0 element of one array
  init_no_array();
  // beyond the size of the array
  beyond_array_size();

  exit(0);
}
void beyond_array_size(void)
{
  int array[SIZE] = {1,0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = 0; i <= SIZE; i++)
    {
      printf("init_whole_array[%d]: %d\n", i, array[i]);
    }

}
void init_whole_array(void)
{
  int array[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = 0; i < SIZE; i++)
    {
      printf("init_whole_array[%d]: %d\n", i, array[i]);
    }
}

void init_part_array(void)
{
  int array[SIZE] = {1};
  for (int i = 0; i < SIZE; i++)
    {
      printf("init_whole_array[%d]: %d\n", i, array[i]);
    }

}

void init_no_array(void)
{
  int array[SIZE];
  for (int i = 0; i < SIZE; i++)
    {
      printf("init_whole_array[%d]: %d\n", i, array[i]);
    }

}
