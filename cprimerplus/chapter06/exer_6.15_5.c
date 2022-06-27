// exer_6.15_5.c
#include <stdio.h>
int main(void)
{
  int i, j, list[10];

  for (i = 0; i < 10; i++)
    {
      list[i] = 2 * i + 3;
      for (j = 0; j < 10; j++)
        {
          printf(" %d ", list[i]);
        }
      printf("\n");
    }
  return 0;
}
