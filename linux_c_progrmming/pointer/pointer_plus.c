// pointer_plus.c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a = 1, b = 2;
  int *pa = &a;
  int *pb = &b;

  int ret = *pa * *pb;
  //int ret = pa * pb;

  printf("ret = %d\n", ret);

  exit(0);
}
