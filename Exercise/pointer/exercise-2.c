/* How to handle the pointer in the program. */
#include <stdio.h>
int main(void)
{
    printf("----------------------------------------\n\n");

    int *ab; // declaration ab = int pointer
    int m;
    m = 29; // dclaration m = 29
    printf("Address of m : %p\n", &m);
    printf("value of m : %d\n", m);

    printf("----------------------------------------\n\n");

    ab = &m;
    printf("Now ab is assigned with the address of m.\n");
    printf("address of pointer ad : %p\n", ab);
    printf("Content of pointer ab : %d\n", *ab);

    printf("----------------------------------------\n\n");

    m = 34;
    printf("The value of m assigned to 34 now.\n");
    printf("address of pointer ad : %p\n", ab);
    printf("Content of pointer ab : %d\n", *ab);

    printf("----------------------------------------\n\n");

    *ab = 7;
    printf("The pointer variable ab is assigned the value 7 now.\n");
    printf("Address of m : %p\n", &m); // as ab contain the address of m.
    printf("Value of m : %d\n\n",m); // so *ab changed the value of m.

    return 0;
}
