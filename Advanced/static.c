// using pointer interate the elements of array
#include <stdio.h>
int main(void)
{
  static char *reglist[4] = {"%r8", "%r9", "%r10", "%r11"};

  // pointer ot pointer
  char **ptr = reglist;

  for(ptr = reglist; ptr < reglist + 4; ptr++)
    printf("%s\n", *ptr);
  return 0;

}
