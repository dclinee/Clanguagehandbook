#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main(void)
{
  double number ; // input number by you
  double val = 180 / PI;
  double mid_number;
  printf("Please enter a number: \n");
  while(1){
      mid_number = scanf("%lf", &number);

      if(-1 <= number && number <= 1)
      {
        double answer_number = asin(mid_number) * val;
        printf("The value of %lf is: %lf\n", number, answer_number);
       }
      else
      {
       printf("%lf\n", asin(number));
       printf("You failed! Please enter another number: \n");
       continue;
      }
 }

    return 0;
}
