// Types of predefined macros
#include <stdio.h>
int main(void)
{
  printf("The current time is: %s\n", __TIME__);
  printf("__STDC__ specifies as %d when then compiler with the \
ANSI standard.\n",
         __STDC__);
  printf("__TIMESTAMP__ specifies timestamp is: %s\n", __TIMESTAMP__);
  printf("__LINE__ consists of a present line number with \
a decimal constant is: %d\n", __LINE__);
  printf("__FILE__ include the current filename using \
a string literal is: %s\n", __FILE__);
  printf("__DATE__ shows the present date with \
a character literal is: %s\n", __DATE__);

  return 0;
}
