// null_statement.c
#include <stdio.h>
int main(void)
{
  int num;
  while(scanf("%d", &num) == 1)
    ;
  printf("%d\n", num);

  return 0;
}
