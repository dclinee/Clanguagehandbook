// array of function pointers
#include <stdio.h>
int sum(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div(int num1, int num2);

int main(void)
{
    int x, y, choice, result;
    int (*ope[4])(int, int); // array of function pointer
    ope[0] = sum;
    ope[1] = sub;
    ope[2] = mult;
    ope[3] = div;

    printf("Enter two integer number: ");
    scanf("%d%d", &x, &y);
    printf("Enter 0 to sum, 1 to sub, 2 to mult and 3 to div.\n");
    scanf("%d", &choice);
    result = ope[choice](x, y);
    printf("%d\n", result);


    return 0;
}

int sum(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mult(int x, int y)
{
    return x * y;
}
int div(int x, int y)
{
    return x / y;
}
