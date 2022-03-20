/* Using Subtraction for Addition */

#include <stdio.h>
int main(void)
{
    int first_number, second_number;

    printf("Ender Two Numbers Addition: ");
    scanf("%d %d", &first_number, &second_number);

    first_number = first_number - (-second_number);
    printf("The two number addition is : %d\n", first_number);
    return 0;
}
