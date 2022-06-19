// global_variable_pitfall.c
#include <stdio.h>
#include <stdlib.h>
int i = 0;

void print_start(void)
{
  for(i = 0; i < 5; i++)
    printf("*");
  printf("\n");
  printf("[%s]i = %d\n", __FUNCTION__, i);
}

int main(void)
{
  for(i = 0; i < 5; i++)
    {
      print_start();
    }
  printf("[%s]i = %d\n", __FUNCTION__, i);

  exit(0);
}
