// Use extern keyword to declare a variable defined in other files in C
#include <stdio.h>
#include <stdlib.h>

#ifndef COUNT
#define COUNT 10
#endif

//extern int counter;
int counter = 0;

int mian(void)
{
  printf("counter: ");
  for (int i = 0; i < COUNT; i++)
    {
      counter += 1;
      printf("%d, ", counter);
    }
  printf("\n");
  exit(EXIT_SUCCESS);
}
