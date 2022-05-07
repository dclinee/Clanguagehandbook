// pointer function demo
#include <stdio.h>
char *str1 = "hello, dclinee.";
char *str2 = "hello, c language.";

char *get_str()
{
  static char i = 0;
  if((i++) % 2)
    return str1;
  else
    return str2;
}

int main(void)
{
  int n = 0;
  while(n++ < 10)
    printf("%s\n", get_str());

  return 0;
}
