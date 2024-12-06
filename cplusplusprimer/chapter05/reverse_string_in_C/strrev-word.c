// program1.c -- reverse a string using the strrev() function
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
  char str[40] = "dclinee"; // declare the size of character string
  printf("\n Enter a string to be reversed:");
  char* temp = strsep(str);
  printf("\n After the reverse of a string: %s", temp);

  return 0;
}
