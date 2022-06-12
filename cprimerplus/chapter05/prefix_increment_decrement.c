#include <stdio.h>

int main(void)
{
    int x = 100, y = 1;

    printf("Initial value of x = %d\n", x);
    printf("Initial value of y = %d\n", y);

    y = ++x; // increment the value of x by 1 then assign this new value to y
             
    printf("After incrementing by 1: x = %d\n", x);
    printf("y = %d\n", y);

    y = --x; // decrement the value of x by 1 then assign this new value to y

    printf("After decrementing by 1: x = %d\n", x);
    printf("y = %d\n", y);

    // siginal to opteating system everything works fine.
    return 0;
}
