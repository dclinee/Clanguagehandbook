// the length of array of character
#include <stdio.h>
int main(void)
{
  char my_string[] = "I love Emamcs.";
  char *ptr = my_string;

  int count = 0;
  while(*ptr != '\0')
    {
      count++;
      ptr++;
    }
  printf("%d\n", count);

  return 0;
}
