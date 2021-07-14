#include <stdio.h>

int main(void)
{
	int a;
	char b;
	float c;
	double d;
	printf("The size of a: %ld\n", sizeof(a));
	printf("The size of b: %ld\n", sizeof(b));
	printf("The size of c: %ld\n", sizeof(c));
	printf("The size of d: %ld\n", sizeof(d));

	int intArray[5] = {10, 11, 12, 13, 15};
	printf("The size of intArray: %ld\n", sizeof(intArray));
	printf("The intArray memory address: %p\n", &intArray);
	printf("The intArray memory address: %p\n", intArray);       // The & is not necessary.
	// The name fo array is address.
	
	// The memory address of array elements
	
	for(int i = 0; i < 5; i++)
	{
	
		printf("The %drd element memory address: %p\n",i+1, &intArray[i]);	
	}	
	return 0;
	
}







