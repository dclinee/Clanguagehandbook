// moving specified character in string
#include <stdio.h>
int main(void)
{
  char my_string[]= "abc efg hijk lmn";
  char *ptr = &my_string[4];
  char *ptr_new = my_string;

  while(*ptr != '\0')
    {
      *ptr_new = *ptr;
      ptr++;
      ptr_new++;
    }
  *ptr_new = '\0';

  printf("%s\n", my_string);
  return 0;
}
