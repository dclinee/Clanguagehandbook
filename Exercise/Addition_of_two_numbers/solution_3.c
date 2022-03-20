/* Sum of Two Number in C Using Function */
#include <stdio.h>
int add(int, int);
int main(void)
{
    int first_number, second_number;

    printf("Enter Two Numbers addition: ");
    scanf("%d %d", &first_number, &second_number);
    printf("The Two Numbers Addition is : %d\n", add(first_number, second_number));

    return 0;
}
int add(int first_number, int second_number)
{
    return first_number + second_number;
}
