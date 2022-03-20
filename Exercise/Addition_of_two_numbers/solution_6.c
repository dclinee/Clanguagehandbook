/* Addition of Two Numbers in C Using While Loop */
#include <stdio.h>
int main(void)
{
    int first_number, second_number;

    printf("Ender two numbers addition: ");
    scanf("%d %d", &first_number, &second_number);

    while(second_number > 0)
    {
        first_number++;
        second_number--;
    }

    printf("The two numbers addition is : %d\n", first_number);
    return 0;
}
