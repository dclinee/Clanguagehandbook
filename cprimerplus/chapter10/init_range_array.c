// init_range_array.c
#include <stdio.h>
int main(void)
{
  int widths[] = {[0 ... 9] = 1, [10 ... 19] = 2};
  for (int i = 0; i < sizeof(widths) / sizeof(widths[0]); i++)
    {
      printf("widths[%d] = %d\n", i, widths[i]);
}
  return 0;
}
