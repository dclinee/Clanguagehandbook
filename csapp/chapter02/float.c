#include <stdio.h>

int main(void)
{
    float f_one = (3.14 + 1e20) -1e20;
    float f_two = 3.14 + (1e20 -1e20);
    printf("%f\n", f_one);
    printf("%f\n", f_two);
    return 0;
}
