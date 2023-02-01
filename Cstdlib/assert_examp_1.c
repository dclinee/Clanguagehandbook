/* Assett example one*/
#include <stdio.h>
#include <assert.h>

void print_number(int *myInt)
{
  assert(myInt != NULL);
  printf("%d\n", *myInt);
}

int main(void) {
  int a = 10;
  int *b = NULL;
  int *c = NULL;

  b = &a;
  print_number(b);
  print_number(c);
  return 0;
}
