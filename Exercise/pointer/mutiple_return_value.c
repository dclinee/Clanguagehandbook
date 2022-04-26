// mutiple return values by using the pointer in C
#include <stdio.h>
int parseGSB(int num, int *a, int *b, int *c)
{
  if(num < 0 || num > 999)
    {
      return 0;
    }
  // 365 ge: 365 % 10; shi: (365/10) % 10 bai: (365/100) % 10
  *a = num % 10;
  *b = (num / 10) % 10;
  *c = (num / 100) % 10;
  return 1;
}
int main(void) {
  int i = 365;
  int i_a, i_b, i_c;
  if(parseGSB(i, &i_a, &i_b, &i_c))
    {
      printf("%d, %d, %d\n", i_a, i_b, i_c);
    }

  return 0;
}
