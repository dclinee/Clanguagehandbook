// main.c
#include <stdio.h>
#include <stdlib.h>

#include "proj.h"
static int i = 10;
int main(void)
{
  printf("[%s]:i %d\n", __FUNCTION__, i);
  call_func();
  exit(0);
}
