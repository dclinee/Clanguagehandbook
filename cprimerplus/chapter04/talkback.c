/* talkback.c -- Demonstrate interaction with users. */

#include <stdio.h>
#include <string.h> //strlen() function prototype
#define DENSITY 64.2

int main(void)
{

	float weight, volume;

	int size, letters;

	char name[40];


	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, What's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d letters to store it.\n", size);

	return 0;
}

/**
 * Hi! What's your first name?
Input:dclinee
dclinee, What's your weight in pounds?
Input:160
Well, dclinee, your volume is 2.49 cubic feet.
Also, your first name has 7 letters,
and we have 40 letters to store it.
*/
