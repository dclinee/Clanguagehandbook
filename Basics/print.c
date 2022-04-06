/* print.c */
#include <stdio.h>
int main(void)
{
  for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < i; j++)
        {
          printf("*");
        }
      printf("\n");
    }
  return 0;
}
