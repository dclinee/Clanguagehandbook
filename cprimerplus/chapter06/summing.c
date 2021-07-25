#include <stdio.h>

int main()
{
	int num;
	int sum;

	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit: )");
	status = scanf("%d", &num);
	while(status == 1)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf("%d", &num);
	}

	printf("Those integer sum to %d.\n", sum);

	return 0;
}
