// substring.c for comparsion string
#include <stdio.h>
int end_with_substring(char *string, char *substring)
{
  int string_lenght = 0;
  while(*string != '\0')
    {
      string++;
      string_lenght++;
    }
  int substring_lenght = 0;
  while(*substring != '\0')
    {
      substring++;
      substring_lenght++;
    }
  if(substring_lenght > string_lenght)
    {
      return 0;
    }
  int i;
  for(i = 0; i < substring_lenght; i++)
    {
      char ch1 = *string;
      char ch2 = *substring;

      if(ch1 != ch2)
        {
          return 0;
        }
      string--;
      substring--;
    }
  return 1;
}
int main(void)
{

  //char str[] = "Hello";
  //char substr[] = "llo";
  //char substring[] = "helloworld";
  printf("%d\n", end_with_substring("helloworld", "world"));
  printf("%d\n", end_with_substring("helloworld", "olo"));
  printf("%d\n", end_with_substring("helloworld", "helloworldll"));

  return 0;
}
