/* program3.1.c */
#include <stdio.h>
char strA[80] = "A string to be used for demonstration purposes";
char strB[80];
char *my_strcpy(char *destination, char *source);

int main(void)
{
  my_strcpy(strB, strA);
  puts(strB);

  return 0;
}

char *my_strcpy(char *destination, char *source)
{
  char *p = destination;
  while(*source != '\0')
    {
      *p++ = *source++;
    }
  *p = '\0';
  return destination;
}
