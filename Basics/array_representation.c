// array_representation.c
#include <stdio.h>
int main(void)
{
  int arr[] = {1, 2, 3, 4,5};

  for(int i = 0; i < 5; i++)
    {
      printf("Inder[%d] Address: %p Value: %d\n", i, (arr + i), *(arr + i));
}
  return 0;
}
