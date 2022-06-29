// static_storage_duration.c
#include <stdio.h>
static int i = 0;
int main(void)
{
  int j = 0;

  printf("i = %d, j = %d\n", i, j);
  // variables i and j belong to static storage duration
  return 0;
}
