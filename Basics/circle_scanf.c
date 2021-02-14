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

float area(float r);

int main(void)
{
	float r; 
	printf("Pleae input r which you want: ");
	scanf("%f", &r);
	printf("Area: %.4f\n", area(r));

	return 0;
}

float area(float r)

{

	return PI * r *r;
}

