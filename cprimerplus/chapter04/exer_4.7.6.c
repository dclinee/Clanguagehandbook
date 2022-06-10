// exer_4.7.6.c
#include <stdio.h>
int main(void)
{
  int num = 100;

  int num_X = 138;
  float num_float = 232.346;
  float num_e = 2.33e+002;
  char name[30] = "abcdefghijklmnopqrstuvwxyz";

  printf("%d\n", num);
  printf("%4X\n", num_X);
  printf("%10.3f\n", num_float);
  printf("%12.2e\n", num_e);
  printf("%-30s[end]\n", name);

  return 0;
}
