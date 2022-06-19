// local_and_global_variable.c
#include <stdio.h>
#include <stdlib.h>

// declarearation of global variable
int i = 100;

void func(int);
int main(void)
{
  // declaration of local variable
  //int i = 2;
  int i = 3;
  func(i);
  {
  // declaration of local variable
    int i = 5;
    printf("i = %d\n", i);
  }
  return 0;
}
void func(int i)
{
  printf("i = %d\n", i);
}
