/* Addition of Two Numbers in C. */
#include <stdio.h>
int main(void)
{
    double first_number, second_number, sum;
    /* Input by user */
    printf("Ender the First Number: ");
    /* First Number Entered by User */
    scanf("%lf", &first_number);
    printf("Enter the Second Number: ");
    /* Second Number Entered by User */
    scanf("%lf", &second_number);
    /* Adding First and Second Number with Addition operator */
    sum = first_number + second_number;
    /* Printing the sum of Both Number */
    printf("\nSum of %lf and %lf is = %lf\n", first_number,second_number
            , sum);

    return 0;
}
