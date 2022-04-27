/*
 * void function in C
 * Functions may be return type functions and non-return type functions.
 * The non-return type functions do not return any value to the calling function;
 * The type of such functions is void. These functions may or may not have any 
 * argument to act upon.*/
#include <stdio.h>
void Display(void);
void main()
{
    Display();
}

void Display()
{
    printf("Play an outdoor game for better health.\n");
}
/*
 * in C:
 * void foo() means " a function foo taking an unspecified number of arguments 
 * of unspecified type.
 * void foo(void) means "a function foo taking no arguments.
 *
 * in C++:
 * void foo() means "a function foo taking no arguments"
 * viod foo(void) means "a function foo taking no arguments."*/
