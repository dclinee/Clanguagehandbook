// 2-dimensional array is often said to be equivalent to a pointer to a pointer
#include <stdio.h>
#define ROWS 5
#define COLS 10

int multi[ROWS][COLS];
// initialized array
int main(void)
{
  int row, col;
  for(row=0; row<ROWS; row++)
    {
      for(col=0; col<COLS; col++)
        {
          multi[row][col] = row * col;
        }
    }

  // output array
  for(row=0; row<COLS; row++)
    {
      for(col=0; col<COLS; col++)
        {
          printf("%d ", multi[row][col]);
          //printf("%d ", *(*(multi + row) + col));
        }
    }

  putchar('\n');

  for(row=0; row<COLS; row++)
    {
      for(col=0; col<COLS; col++)
        {
          //printf("\n%d ", multi[row][col]);
          printf("%d ", *(*(multi + row) + col));
        }
    }
  putchar('\n');

  return 0;
}
