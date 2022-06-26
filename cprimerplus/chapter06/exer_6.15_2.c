// exer_6.15_2.c
#include <stdio.h>
int main(void)
{
  double value;
  for (value = 36; value > 0; value /= 2)
    printf("%lf\n", value);
  printf("\n");

  #if 0
  int value;
  for (value = 36; value > 0; value /= 2)
    printf("%3d", value);
  printf("\n");
  #endif
  return 0;
}
