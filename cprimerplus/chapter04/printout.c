/* printout.c*/
#include <stdio.h>
#define PI 3.141593

int main(void)
{
  int number = 7;
  float pies = 12.75;
  int cost = 7800;
  int pc = 2 * 6;

  printf("The %d contestants ate %f berry pies.\n", number, pies);
  printf("The value of pi is %f.\n", PI);
  printf("Farewell! thou art too dear for my possessing.\n");
  printf("%c%d\n", '$', 2 * cost);
  printf("Only %d%% sally's gribbles were edible.\n", pc);

  return 0;
}
