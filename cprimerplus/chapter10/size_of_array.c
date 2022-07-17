// size_of_array.c -- declaration size of the array with integer constant expression
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n = 5;
  int m = 8;
  float a1[5];
  float a2[5*2 + 1];
  float a3[sizeof(int) + 1];
  float a4[-4];    // size of array is non-integer type
  float a5[0];
  float a6[2.5];   // size of array is non-integer type
  float a7[(int)2.5];
  float a8[n];   // variable-length array
  float a9[m];  // variable-length array

  return 0;
}
