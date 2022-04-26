// my_string_length.c
#include <stdio.h>
int mystrlen(char *string)
{
  int len = 0;
  while(*string != '\0')
    {
      len++;
      string++;
    }
  return len; // can not include '\0'
}

int main(void)
{
  char str[] = "hello";
  int ret = 0;
  ret = mystrlen(str);
  printf("%d\n", ret);

  return 0;
}
