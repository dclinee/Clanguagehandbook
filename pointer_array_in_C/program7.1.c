// program7.1.c
#include <stdio.h>
#define ROWS 5
#define COLS 10

int multi[ROWS][COLS];

void set_value(int my_array[][COLS])
{
  int row, col;
  for(row = 0; row < ROWS; row++)
    {
      for(col = 0; col < COLS; col++)
        {
          my_array[row][col] = 1;
        }
    }

  for( row = 0; row < ROWS; row++ )
    {
      for(col = 0; col < COLS; col++)
        {
          printf("%d ", my_array[row][col]);
        }
    }
  putchar('\n');
}
int main(void)
{
  set_value(multi);

  return 0;
}
