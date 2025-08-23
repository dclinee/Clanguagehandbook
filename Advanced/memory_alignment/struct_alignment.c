#include <stdio.h>
#include <stdlib.h>

struct Demo
{
  char a;
  int b;
  short c;
}Demo;

struct DemoOpt
{
  int d;
  short e;
  char f;
}DemoOpt;

int main(void)
{
  printf("Demo's size is: %zu bytes.\n", sizeof(Demo));
  printf("DemoOpt's size is: %zu bytes.\n", sizeof(DemoOpt));

  exit(0);
}
