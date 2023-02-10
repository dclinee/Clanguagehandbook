// example_forth.c
#include <stdio.h>
#define get_string(n) #n
int main(void)
{
  printf("%s\n", get_string("dclinee"));
  printf("hello world.\n");

  return 0;
}
