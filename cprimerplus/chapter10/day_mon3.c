// day_mon3.c -- uses pointer notation
#include <stdio.h>
#define MONTHS 12
int main(void) {
  int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int index = 0;
  for(index = 0; index < MONTHS; index++)
    {
      printf("Month %2d has %d days.\n", index +1, *(days + index));
      // use a pointer to identify an individual element of an arrayOne
      // and to obtain its value
      // equal to array notation days[indes]
    }


  return 0;
}
