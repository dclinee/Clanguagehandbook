// exer_5.11_9.c
#include <stdio.h>
#define TEN 10

int main(void)
{
  char ch = 'a';

  while (ch <= 'g')
    printf("%5c", ch++);
  printf("\n");

  return 0;
}
