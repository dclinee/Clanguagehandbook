/* Using Logarithm and Exponential Function */
#include <stdio.h>
#include <math.h>
int main(void)
{
    int first_number, second_number;
    printf("Ender two number addition: ");
    scanf("%d %d", &first_number, &second_number);

    printf("%g\n", log(exp(first_number) * exp(second_number)));
    return 0;
}
