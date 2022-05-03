/*
 strings and pointers in C are very closely related.
Since a string is an array, the name of the string is a constant pointer to the string.
This pointer can be used to perform operation on the string.*/
#include <stdio.h>
int length(char *s);
char *my_strcpy(char *des, char *sou);
int main(void)
{
  char str_hell[] = "hello";
  char *ptr = str_hell;

  for(ptr = str_hell; *ptr != '\0'; ptr++)
    {
      putchar(*ptr);
    }
  putchar('\n');
  // find the length of the string
  int str_length = length(str_hell);
  printf("%d\n", str_length);
  // copy one string to another and return the copied string

  char des_str[100];
  my_strcpy(des_str, str_hell);
  puts(des_str);
  return 0;
}
int length(char *s)
{
  int count = 0;
  while(*s != '\0')
    {
      count++;
      s++;
    }
  return count;
}

char *my_strcpy(char *des, char *sou)
{
  char *temp = des;
  while(*sou != '\0')
    {
      *temp++ = *sou++;
    }
  *temp = '\0';
  return des;
}
