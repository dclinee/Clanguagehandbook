#include <stdio.h>

int main()
{
	int n;              //size of array

	scanf("%d", &n);

	int student[n];    // declaration of array

	int average, sum = 0;

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &student[i]);//initialization of array	
	}

	student[2] = student[2] + 7;  // accessing 3rd element

	student[4] = student[4] + 7;  // accessing 5rd element


	for(int i = 0; i < n; i++)
	{
		sum = sum + student[i];// accessing elements via loop	
	}

	average = sum / n;             //calculating average

	for(int i = 0; i < n; i++)
	{
		printf("Marks of student %d : %d\n", i + 1, student[i]);	
	}
	printf("Sum is : %d\n", sum);
	printf("Average is : %d\n", average);
	

	return 0;
}
