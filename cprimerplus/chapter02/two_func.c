/* two_func.c */
#include <stdio.h>
void butler();
int main()
{
  printf("I will summon the butler function..\n");
  butler();
  printf("Yes. Bring me some tea adn writeable DVDs.\n");

  return 0;
}

void butler()
{
  printf("Yon rang, sir?\n");
}
