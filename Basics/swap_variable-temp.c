#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, c;
    c = a;
    a = b;
    b = c;
    printf("a = %d \t b = %d\n", a, b);

    return 0;
}
