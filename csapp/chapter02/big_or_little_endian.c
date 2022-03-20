#include <stdio.h>

int main(void)
{
    union number
    {
        int a;
        char b;
    }num;
    num.a = 0x1122;
    if( num.b == 0x11)
    {

        printf("Big endian.\n");
    }
    else
        printf("Little endian.\n");
    return 0;
}
