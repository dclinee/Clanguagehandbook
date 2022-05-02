// 3d_array.c printing the elements of the 2-D array using the pointer
#include <stdio.h>

int main()
{
  int arr[3][3][3] = {{1, 2, 3,  4, 5, 6,  7, 8, 9},
                      {2, 4, 6,  8, 10, 12,  14, 16, 18},
                      {3, 5, 7,  9, 11, 13,  15, 17, 19}};
  int i, j, k;
  // the below statement is wrong because
  // arr will return the address of a first 1-D array.
  // int *ptr = arr;
  // int *ptr = &arr[0][0]; is correct or we can write &arr[1][0], &arr[2][0]

  printf("Address : \n");

  for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 3; j++)
        {
          for(k = 0; k < 3; k++)
            {
              printf("%p[%d][%d][%d] ", (*(*(arr + i) + j) + k), i, j, k);
}
          printf("\n");
}
          printf("\n");
}
  printf("Value : \n");

  for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 3; j++)
        {
          for(k = 0; k < 3; k++)
            {
              printf("%d[%d][%d][%d] ", *(*(*(arr + i) + j) + k), i, j, k);
}
          printf("\n");
}
          printf("\n");
}
  return 0;
}
