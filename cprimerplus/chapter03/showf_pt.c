#include <stdio.h>

int main(void)
{
  float aboat = 32000.0;
  double abet = 2.14e9;
  long double dip = 5.32e-5;

  printf("%f can be written %e\n", aboat, aboat);
  printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
  printf("%f can be written %e\n", abet, abet);
  printf("%lf can be written %le\n", dip, dip);

  return 0;
}
