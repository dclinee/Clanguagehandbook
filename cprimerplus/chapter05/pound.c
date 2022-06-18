// pound.c
#include <stdio.h>
void pound(int n); // function prototype
int main(void)
{
  int times = 5;
  char ch = '!';
  float f = 6.0f;

  pound(times);
  pound(ch); // pound((int)ch)
  pound(f); // pound((int)f)

  return 0;
}

void pound(int n)
{
  while (n-- > 0)
    printf("#");
  printf("\n");
}
