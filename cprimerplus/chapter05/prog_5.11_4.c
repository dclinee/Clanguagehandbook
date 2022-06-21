// prog_5.11_4.c
#include <stdio.h>
int main(void)
{
  float height;
  float feet;
  float inches;

  printf("Enter a height in centimeter: ");
  scanf("%f", &height);
  while (height > 0)
    {
      feet = height / 36.4;
      inches = height / 15.5;
      printf("%f = %.1f feet, %.1f inches\n", height, feet, inches);;
      printf("Enter a height in centimeters (<= 0 to quit):");
      scanf("%f", &height);
    }

  return 0;
}
