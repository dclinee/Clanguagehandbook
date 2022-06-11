// exercise 4.7.2.c
#include <stdio.h>
#include <string.h>
#define Q "His Hamlet was funny without being vulgar."
int main(void)
{
  printf("%s\nhas %d characters.\n", Q, strlen(Q));
  printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
  printf("%c%c%c\n", 'H', 105, '\41');
  printf("He sold the painting for $%2.2f.\n", 2.345e2);

  return 0;
}
