#include <stdio.h>

int main(void)
{
	int c;

	printf("Enter a value :");
	c = getchar();

	printf("\nYou entered: ");
	putchar(c);
	printf("\n");

	return 0;
}
