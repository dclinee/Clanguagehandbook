#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  const char str[] = "www.helloworld.com";
  const char ch = '.';
  char *ret;

  ret = strchr(str, ch);
  printf("String after |%c| is - |%s|\n", ch, ret);

  exit(0);
}
