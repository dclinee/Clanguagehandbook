#include <stdio.h>
int foo()
{
    return 5;
}
int main(void)
{
    printf("The address of foo is : %p\n", &foo);
    return 0;
}
