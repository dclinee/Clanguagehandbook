// scores_in.c
#include <stdio.h>
#define SIZE 10
#define PAR 72

int main(void)
{
  int index, score[SIZE];
  int sum = 0;
  float average;

  printf("Enter %d golf scores:\n", SIZE);
  for (index = 0; index < SIZE; index++)
    {
      scanf("%d", &score[index]);
    }
  for (index = 0; index < SIZE; index++)
    {
      printf("%5d ", score[index]);
    }
  printf("\n");
  for (index = 0; index < SIZE; index++)
    {
      sum += score[index];
    }
  average = (float)sum / SIZE;
  printf("Sum of scores = %d, average = %.2f\n", sum, average);
  printf("That's a handicap of %.0f.\n", average - PAR);

  return 0;
}
