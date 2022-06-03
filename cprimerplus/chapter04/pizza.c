/* pizza.c */
#include <stdio.h>
#define PI 3.14159
int main(void)
{
  float area, cirum, radius;

  printf("What is the radius of your pizza?\n");
  scanf("%f", &radius);
  area = PI * radius * radius;
  cirum = 2.0 * radius * radius;
  printf("Your basic pizza parameters are as follows:\n");
  printf("cirumference = %1.2f, area = %1.2f\n", area, cirum);

  return 0;
}
