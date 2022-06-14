// side_effect.c

#include <stdio.h>
int main(void)
{
  int i = 0, a;
  a = i++ && 1;
  printf("%d\n", a);
  getchar();

  return 0;
}
