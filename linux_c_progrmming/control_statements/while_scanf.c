// while_scanf.c
#include <stdio.h>
#include <stdlib.h>
#define LEFT 1

int main(void)
{
  int i = LEFT, right;
  int sum = 0;

  printf("Please enter a integer number: ");
  scanf("%d", &right);
  if(right < 1 || right > 100000)
    {
    fprintf(stderr, "Input error! please enter again.\n");
    exit(1);
}
  while(i <= right)
    {
      sum = sum + i;
      i++;
}
  printf("sum = %d\n", sum);
  return 0;
}
