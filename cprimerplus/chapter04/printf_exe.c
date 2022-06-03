/* printf_exe.c */
#include <stdio.h>
int main(void)
{
  char name[40];
  float cash;

  printf("What's your name?\n");
  scanf("%s", name);
  printf("How much cash you have?\n");
  scanf("%f", &cash);

  printf("%s have %.2f cash.\n", name, cash);

  return 0;
}
