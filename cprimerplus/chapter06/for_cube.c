// for_cube -- create a table of cube with input from user
#include <stdio.h>
int main(void)
{
  int number;
  printf("Enter a number for create a table of cube:");
  scanf("%d", &number);

  printf("    n    n cubed\n");
  for(int i = 1; i <= number; i++)
    {
      printf("%5d %5d\n", i, i*i*i);
    }
  return 0;
}
