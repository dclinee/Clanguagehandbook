/* program3.1.c */
#include <stdio.h>
char strA[80] = "A string to be used for demonstration purposes";
char strB[80];

int main(void)
{
  char *pA;
  char *pB;
  puts(strA);
  pA = strA;
  puts(pA);
  pB = strB;
  putchar('\n');
  while (*pA != '\0') {
    *pB++ = *pA++;
  }
  *pB = '\0';
  puts(strB);
  pB = strB;
  puts(pB);

  return 0;
}
