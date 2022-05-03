/* array to character initialization */
#include <stdio.h>
int main(void)
{
  char strA[40] = {'T', 'e', 'd', '\0'}; // ways to one
  char strB[40] = "Test"; // ways to two

  puts(strA);
  puts(strB);

  return 0;
}
