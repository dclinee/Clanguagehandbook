#include <stdio.h>

// Uninitilized variable stored in BSS
int num;
static int var;
int var_num = 100;
int main(void)
{
  static int i = 100;
  static int m = 100;
  return 0;
}
