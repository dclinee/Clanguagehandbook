// cypher2.c
#include <stdio.h>
#include <ctype.h>
int main(void)
{
  char ch;

  while ((ch = getchar() != '\n'))
    {
      if(isalpha(ch))
        putchar(ch + 1);
      else
        putchar(ch);
      ch = getchar();
    }
  putchar(ch);

  return 0;
}
