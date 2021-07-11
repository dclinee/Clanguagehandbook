#include <stdio.h>
/*
 The first line of the program #include <stdio.h> is a preprocessor directive which instructs the compiler to include stdio.h header file from the C library for input/output. 
 */

int main(void)
//Every C program must have only one main function. 
/*
 If we create more than one main() function in a C program then we will get an error as the compiler will not know which one represent the starting point of the program. *
 */

{
//The printf() function in C is used to print output. It is a standard C function.
	printf("Hello World!\n");
//The last line inside the main function is a return statement. 
//Returning an integer value 0 at the end of the function.
	return 0;
}
