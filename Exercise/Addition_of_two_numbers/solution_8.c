/* Half Adder Logic */
#include <stdio.h>
int addition(int, int);

int main(void)
{
    int first_number, second_number;
    printf("Ender two number addition: ");
    scanf("%d %d", &first_number, &second_number);

    printf("The two numbers addition is : %d\n", addition(first_number,second_number));

    return 0;
}

int addition(int num1, int num2)
{
    if(!num2)
        return num1;

    int s = num1 ^ num2;
    int c = (num1 & num2) << 1;

    return addition(s, c);
}
