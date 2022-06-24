// if_else.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 9, b = 10;
#if 0
  if(b++ < a)
    printf("1\n");
  else
    printf("0\n");

  printf("a = %d, b = %d\n", a, b);
#endif
  printf("%d\n", (++b < a, ++a, b++));
  printf("a = %d, b = %d\n", a, b);

  exit(1);
}
