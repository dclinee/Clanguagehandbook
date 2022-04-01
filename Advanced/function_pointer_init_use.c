/* Initializing function pointer and using function pointer. */
/* Note that function pointer syntax is flexible.
 * it can either look like most other uses of pointer,
 * whit & and *, or you may omit that part of syntax.
 *This is similar to how arrays are treated, where a 
 * bare array decays to a pointer, but you may also prefix
 * the array & to request its address.
 */
#include <stdio.h>
void my_int_func(int x)
{
    printf("%d\n", x);
}

int main()
{
    void (*foo)(int);
    foo = &my_int_func;
    foo(2);
    (*foo)(2);

    printf("The address of function pointer foo is : %p\n", &foo);
    printf("The value at the address of function pointer foo is : %p\n", foo);
    printf("The address of function my_int_func is : %p\n", &my_int_func);
}
