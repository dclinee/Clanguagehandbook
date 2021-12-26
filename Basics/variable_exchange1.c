#include <stdio.h>

int main(void)
{
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
