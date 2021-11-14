#include <stdio.h>
#include <math.h>

int main(void)
{
  double number ;
  double mid_number;
  printf("Please enter a number: \n");
  while(1)
    {


    mid_number = scanf("%lf", &number);

    if(-1 <= number && number <= 1)
        {
        double answer_number = asin(mid_number);
        printf("The answer is: %lf\n", answer_number);
        }
    else
        printf("You failed!");
    continue;
        }
    return 0;
}
