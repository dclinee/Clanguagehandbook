// proj.c
#include <stdio.h>
#include <stdlib.h>

#include "proj.h"

//extern i;
extern int i;

void func(void)
{
  printf("[%s]:i = %d\n", __FUNCTION__, i);
  exit(0);
}
