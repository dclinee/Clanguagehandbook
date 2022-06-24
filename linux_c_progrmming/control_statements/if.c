// if.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 9, b = 10;

  if(b++ < a)
    printf("1\n");

  printf("a = %d, b = %d\n", a, b);

  exit(1);
}
