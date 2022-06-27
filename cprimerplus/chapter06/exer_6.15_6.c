// exer_6.15_6.c
#include <stdio.h>
int main(void)
{
  int i, j;

  for(i = 0; i < 4; i++)
    {
      for(j = 0; j < 8; j++)
        {
          printf("%c", '$');
        }
      printf("\n");
    }

  return 0;
}
