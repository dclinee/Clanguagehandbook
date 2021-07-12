#include <stdio.h>

int main(void)
{
	int intArray[5] = {1, 2, 3, 4, 5};

	printf("The size of int type: %ld\n", sizeof(int));
	printf("The size of array: %ld\n", sizeof(intArray));
	for(int i = 0; i < 5; i++)
	{
	
		printf("The memory address of array:%p \n", &intArray[i]);
	}

	printf("The first element address: %p\n", &intArray);

	return 0;
}
