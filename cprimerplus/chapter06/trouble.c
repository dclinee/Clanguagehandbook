//toruble.c
#include <stdio.h>

int main()
{
	long num;
	long sum = 0L;

	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit: )");
	status = scanf("%ld", &num);
	while(status = 1)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf("%ld", &num);
	}

	printf("Those integer sum to %ld.\n", sum);

	return 0;
}
