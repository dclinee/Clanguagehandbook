// mac_arg.c -- macro with arguments
#include <stdio.h>
#define SQUARE(X) X*X
#define PR(X) printf("The result is %d\n", X)

int main(void)
{
  int x = 5;
  int z;

  printf("x =  %d\n", x);

  z = SQUARE(x);
  printf("Evaluating SQUARE(x): ");
  PR(z);

  printf("Evaluating SQUARE(2): ");
  PR(SQUARE(2));

  printf("Evaluating SQUARE(x+2): ");
  PR(SQUARE(x+2));

  printf("Evaluating 100/SQUARE(2): ");
  PR(z);

  printf("The result is %d\n", x);
  printf("Evaluting SQUARE(++x): ");
  PR(SQUARE(++x));
  printf("After incrementing, x is %d\n", x);

  return 0;
}
