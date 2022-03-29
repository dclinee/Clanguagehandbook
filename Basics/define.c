/* define.c */
#include <stdio.h>
#define LENGTH 50
#define WIDTH 1
#define NEWLINE '\n'
int main(void)
{
  int area;

  area = LENGTH * WIDTH;
  printf("value of area : %d", area);
  printf("%c", NEWLINE);
  return 0;
}
