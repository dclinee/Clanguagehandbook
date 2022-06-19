// proj.c
#include <stdio.h>
#include <stdlib.h>

#include "proj.h"

static int i = 100;

void func(void)
{
  printf("[%s]:i = %d\n", __FUNCTION__, i);
  exit(0);
}
