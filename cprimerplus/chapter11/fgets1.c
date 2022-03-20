/* getsputs.c */
#include <stdio.h>
#define STLEN 14
int main(void)
{
  char words[STLEN];

  puts("Ender a string, please.");
  fgets(words, STLEN, stdin);
  printf("Your string twice (puts(), then fputs()):\n");
  puts(words);
  fputs(words, stdout);
  puts("Ender another string, please.");
  fgets(words, STLEN, stdin);
  printf("Your string twice (puts(), then fputs()):\n");
  puts(words);
  fputs(words, stdout) ;
  puts("Done.");

  return 0;
}
