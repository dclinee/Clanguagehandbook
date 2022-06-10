// exercise 4.7.5.c
#include <stdio.h>
#define BOOK "War and Peace"
int main(void)
{
  float cost = 12.99;
  float percents = 80.0;

  printf("This copy of \"%s\" sells for $%0.2f.\n", BOOK, cost);
  printf("That is %0.0f%% of list.\n", percents);

  return 0;
}
