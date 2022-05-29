/* program.9.1.c*/
#include <stdio.h>
#include <stdlib.h>

#define COLS 5

typedef int row_array[COLS];
row_array *rptr;

int main(void)
{
  int nrows = 10;
  int row, col;
  rptr = malloc(nrows * COLS * sizeof(int));
  for (row = 0; row < nrows; row++)
    {
      for(col=0; col < COLS; col++)
        {
          rptr[row][col] = 17;
        }
    }

  return 0;
}
