#include <stdio.h>

int main(void)
{

    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("max = %d\n", ((a > b ? a : b) > c ? (a > b ? a : b) : c));
    return 0;
}
