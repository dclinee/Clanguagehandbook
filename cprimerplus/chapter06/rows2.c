// rows1.c -- nested loop
#include <stdio.h>
//#define ROWS 6
//#define CHARS 10
int main(void)
{
  const int ROWS = 6;
  const int CHARS = 6;
  int row;
  char ch;

  for(row = 0; row < ROWS; row++)
    {
      for(ch = ('A' + row); ch < ('A'+ CHARS) ; ch++)
        printf("%c", ch);
      printf("\n");
    }
  return 0;
}
