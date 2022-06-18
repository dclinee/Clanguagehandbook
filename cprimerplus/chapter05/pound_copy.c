// pound_copy.c
#include <stdio.h>
void pound( ); // function prototype before ANSI C
int main(void)
{
  int times = 5;
  char ch = '!';
  float f = 6.0f;

  pound(times);
  pound(ch); // pound((int)ch)
  pound((int)f); // pound((int)f)

  return 0;
}

void pound(int n)
{
  while (n-- > 0)
    printf("#");
  printf("\n");
}
