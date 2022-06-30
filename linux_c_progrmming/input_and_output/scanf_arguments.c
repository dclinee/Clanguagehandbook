// scanf_arguments.c
#include <stdio.h>
int main(void)
{
  int max, min;

  printf("Please enter some integers: ");
  scanf("%d%d", &max, &min);
  printf("max = %d, min = %d\n", max, min);
  return 0;
}
