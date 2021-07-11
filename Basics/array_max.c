#include <stdio.h>
#define ARRAYSIZE 15
int main()
{

	// Initialize array with for loop
	int i, a[ARRAYSIZE]; 
	printf("Please input ARRAYSIZE numbers:\n");

	for(i=0;i<ARRAYSIZE;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<ARRAYSIZE;i++)
		printf("The %d number = %d\n", i+1, a[i] );
	int max = a[0];
	for(i=1;i<ARRAYSIZE;i++)
		if(max < a[i])
			max = a[i];
			printf("The maxnumber is:%d \n", max);

	for(i=1;i<ARRAYSIZE;i++)
		if(min > a[i])
			min = a[i];
			printf("The minnumber is:%d \n", min);
	return 0;
}








