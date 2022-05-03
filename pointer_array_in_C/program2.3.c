// program2.1.c
#include <stdio.h>
int my_array[] = {1, 23, 17, 4, -5, 100};
int *ptr = NULL;
int main(void)
{
  int i;
  // point our pointer to the first element of the array
  ptr = &my_array[0];

  printf("\n\n");
  for (i = 0; i < 6; i++)
    {
      printf("my_array[%d] = %d\n", i, my_array[i]);
    }

  printf("\n\n");

  for (i = 0; i < 6; i++)
    {
      printf("ptr + %d = %d\n", i, *(ptr + i));
    }
  printf("\n\n");
  for (i = 0; i < 6; i++)
    {
      printf("ptr + %d = %d\n", i, *ptr++);
    }

  printf("\n\n");
  for (i = 0; i < 6; i++)
    {
      printf("ptr + %d = %d\n", i, *(ptr++));
    }
  printf("\n\n");
  for (i = 0; i < 6; i++)
    {
      printf("ptr + %d = %d\n", i, *(++ptr));
    }

  return 0;
}
