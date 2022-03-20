#include <stdio.h>

int main(void)
{

    int num = 200*300*400*500;
    int num1 = (200*300)*(400*500);
    int num2 = 200*(300*(400*500));
    int num3 = ((200*500)*300) * 400;
    int num4 = 400 * (200 * (300 * 500));
    printf("%d\n", num);
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    printf("%d\n", num4);
    return 0;
}
