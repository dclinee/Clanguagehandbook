#include <stdio.h>
#include <stlib.h>
#include <string.h>
#define SIZE 3
int main()
{
	// int size = 3;
	// Array declaration by specifing size
	int arrayOne[SIZE];

	for(int i = 0; i < 3; i++)
	{
		printf("%d\n", arrayOne[i]);	
		printf("%p\n", &arrayOne[i]);	
	}
	return 0;
}
