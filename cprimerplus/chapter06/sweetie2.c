// sweetie2.c -- a counting loop
#include <stdio.h>

int main(void)
{
  const int NUMBER = 22;
  int count;
#if 0
  while(count <= NUMBER)
    {
      printf("Be my Valentine!\n");
      count++;
    }
#endif
  for(count = 1; count <= NUMBER; count++)
    {
      printf("Be my Valentine!\n");
    }
  printf("count = %d\n", count);
  printf("The loop is finished!\n");
  return 0;
}
