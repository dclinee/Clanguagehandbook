/* Recursion: Sum of Two Numbers */
#include <stdio.h>

int addition(int, int);
int main(void)
{
    int first_number, second_number;
    
    printf("Ender two numbers addition: ");
    scanf("%d %d", &first_number, &second_number);

    printf("The two numbers addition is : %d\n", addition(first_number, second_number));
    
    return 0;
}

int addition(int first_number, int second_number)
{
    if(!first_number)
        return second_number;
    else
        return addition((first_number & second_number) << 1, first_number ^ second_number);
}
