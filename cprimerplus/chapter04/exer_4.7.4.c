// exercise 4.7.4.c
#include <stdio.h>
#define B "booboo"
#define X 10
int main(void)
{
  int age;
  int xp;
  char name[40];

  printf("Please enter your first name.\n");
  scanf("%s", name);
  printf("All right, %s, what's your age?\n", name);
  scanf("%d", &age);
  xp = X + age;
  printf("That's a %s! You must be at least %d years old.\n", B, xp);

  return 0;
}
