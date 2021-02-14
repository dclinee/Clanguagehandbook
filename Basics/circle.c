// Basic structur of a C program.
/**
 * file: circle.c
 * author: dclinee
 * date: 2021-2-14
 * description: program to find the area of a circle
 *              using the radius r.
 */

#include <stdio.h>
#define PI 3.14159
//The #define is not a statement and must not end with a ; semicolon.
//We generally use uppercase letters to create constants.

float area(float r);
// Global declaration
// This section contains function declaration.

int main(void)
//This is the main() function of the code.
{

	float r = 100;
	// we have created a floating variable r and assigned 100 to it.

	printf("Area: %.4f\n", area(r));
	//we have called the printf() function.
	//The first argument contians "Area: %.4f" which means we will
	//print floating number having only 4 decimal place.
	//In the second argument we are calling the area() function and
	//passing the value of r to it.


	return 0;
}


//Subprograms
/**This section contains a subprogram, an area() function
 * that is called from the main() function.
 */

float area(float r)
/**This is the definition of the area() function.
 * It receives the value of radius variable r and the trturns the
 * area of circle using the following formula PI * r * r.
 */
{

	return PI * r *r;
}

//The above code will give the following output. 
// Area: 31415.9004

