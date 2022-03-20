/* Addition of Two Numbers in C Using printf() */

#include <stdio.h>

int addition(int, int);
int main(void)
{
    int first_number, second_number;
    printf("Ender two number addition: ");
    scanf("%d %d", &first_number, &second_number);

    printf("The two numbers addition is : %d\n", addition(first_number, second_number));

    return(0);
}

int addition(int a, int b)
{
    /* %*s means print a character * number of times.*/
    return printf("%*s%*s", a, "", b, "");
}
