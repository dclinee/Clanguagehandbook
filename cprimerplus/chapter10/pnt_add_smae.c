// pnt_add_smae.c -- pointer addition and two respentsion of one objext
#include <stdio.h>
#define SIZE 4
int main(void) {
  short dates[SIZE];
  short *pti;
  short index;
  double bills[SIZE];
  double *ptf;

  // address of array assigned as values to pointer variable
  pti = dates;
  ptf = bills;

  printf("%20s %12s\n", "short", "double");
  for (index = 0; index < SIZE; index++)
    printf("pointer + %d: %10p %10p\n", index, pti + index, ptf + index);
  for (index = 0; index < SIZE; index++)
    {
      printf("dates + %d = %p\n", index, &dates[index]);
    }
  for (index = 0; index < SIZE; index++)
    {
      printf("&datex[%d] = %p\n", index, (dates + index));
    }
  // compare &date[inder]with (dates + index)
  // dates + index == &dates[index]
  // compare dates[index] == *(dates + index)
  // dates[index] == *(dates + index)
  return 0;
}
