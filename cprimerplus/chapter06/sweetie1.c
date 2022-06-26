// sweetie1.c -- a counting loop
#include <stdio.h>

int main(void)
{
  const int NUMBER = 22;
  int count = 1;
  while(count <= NUMBER)
    {
      printf("Be my Valentine!\n");
      count++;
    }
  printf("count = %d\n", count);
  printf("The loop is finished!\n");
  return 0;
}
