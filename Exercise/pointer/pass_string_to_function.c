// passing strings to function
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void show(char *string)
{
  printf("The string is = %s\n", string);
}
int main(void)
{
  char *str = "helloworld";
  char str_1[] = "hi, dclinee!";

  show(str); //note that we don't need to send "&str"
  show(str_1);
  return 0;
}
