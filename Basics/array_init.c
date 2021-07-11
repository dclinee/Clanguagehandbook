#include <stdio.h>

int main()
{
	int arr[10];
	// Initialize array with for loop

	for(int i = 0; i <= 9; i++)
		arr[i] = i;
	
	for(int i = 0; i <= 9; i++)
		printf("%d = %d\n", arr[i], i);
	printf("\n");

	for(int i = 9; i >= 0; i--)
		printf("%d = %d\n", arr[i], i);
	printf("\n");
	return 0;
}
