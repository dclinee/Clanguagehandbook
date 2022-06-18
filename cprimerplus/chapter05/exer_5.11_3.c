// exer_5.11_3.c
#include <stdio.h>
int main(void)
{
  float a = 30.0 / 4.0 * 5.0;
  float b = 30.0 / ( 4.0 * 5.0);
  int c = 30 / 4 * 5;
  int d = 30 * 5 / 4;
  float e = 30 / 4.0 * 5;
  float f = 30 / 4 * 5.0;

  printf("a = %f, b = %f, c = %d, d = %d, e = %f, f = %f\n",
         a, b, c, d, e, f);
  return 0;
}
