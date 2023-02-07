/* Definiton of union*/
#include <stdio.h>
union test{
  int x, y;
};
int main(void)
{
  /* A union variable t  */
  union test t;
  t.x = 2;
  printf("After making x = 2:\n x = %d, y = %d\n", t.x, t.y);

  t.y = 100;
  printf("After making y = 100:\n x = %d, y = %d\n", t.x, t.y);

   return 0;
}
