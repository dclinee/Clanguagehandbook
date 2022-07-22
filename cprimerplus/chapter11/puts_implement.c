// puts_implement.c
#include <stdio.h>
int puts_implement(const char *string);
int main(void)
{
  puts_implement("Hello, world!");
  return 0;
}

int puts_implement(const char *string)
{
  const char *t = string;
  const char *v = string;

  int i = 0;
  while (*t != '\0')
    {
      i++;
      t++;
    }
  int j;
  for (j = 0; j <=i; j++)
    putchar(v[j]);
  putchar('\n');

  return 0;
}
