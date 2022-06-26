// summing_simplified_version.c -- the sum of the integer values from user input
#include <stdio.h>

int main(void)
{
	long num;
	long sum = 0L;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	while(scanf("%ld", &num) == 1)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		scanf("%ld", &num);
	}

	printf("Those integer sum to %ld.\n", sum);

	return 0;
}
