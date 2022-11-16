// program1.c -- reverse a string using the strrev() function
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
  char str[40]; // declare the size of character string
  printf("\n Enter a string to be reversed:");
  scanf("%s", str);
  //  char *temp = strrev(str);
  // use strrev() function to reverse a string
  printf("\n After the reverse of a string: %s", strrev(str));

  return 0;
}
