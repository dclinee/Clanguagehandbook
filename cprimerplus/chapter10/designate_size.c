// designate_size.c
#include <stdio.h>
#include <string.h>


int main(void)
{
  int stuff[] = {1, [6] = 23};
  printf("The size of stuff = %d\n", sizeof(stuff) / sizeof(stuff[0]));
  int staff[] = {1, [6] = 4, 9, 10};
  printf("The size of staff = %d\n", sizeof(staff) / sizeof(staff[0]));

  return 0;
}
