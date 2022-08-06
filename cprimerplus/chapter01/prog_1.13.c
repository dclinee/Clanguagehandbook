// prog_1.13.c transform inches to cm
#include <stdio.h>
#define SIZE 2.54
void transform(void)
{
  float inches;
  printf("Please enter your inches number: ");
  scanf("%f", &inches);
  float cm = SIZE * inches;
  printf("Your cm is:%f \n", cm);
}

int main(void)
{
  transform();
  return 0;
}
