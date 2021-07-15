#include <stdio.h>
#include <stdlib.h>

void functionCalled()
{
	printf("This is to be called function.\n");
}

int main()
{
	// register the termination function
	atexit(functionCalled);

	printf("Starting main program...\n");


	printf("Starting main program...\n");
	
	return 0;
}
