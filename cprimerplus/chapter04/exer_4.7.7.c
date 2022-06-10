// exer_4.7.7.c
#include <stdio.h>
int main(void)
{
  unsigned long num = 100000000000000;
  int num_X = 138;
  float num_float = 232.346;
  float num_e = 2.33e+002;
  char name[30] = "abcdefghijklmnopqrstuvwxyz";

  printf("%15lu\n", num);
  printf("%#4x\n", num_X);
  printf("%+10.3f\n", num_float);
  printf("%-12.2e\n", num_e);
  printf("%8.8s[end]\n", name);

  return 0;
}
