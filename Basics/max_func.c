#include <stdio.h>
int max(int a, int b)
{
	return a > b ? a : b;
}

int min(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	printf("The max number is: %d\n", max(1,13));	
	printf("The min number is: %d\n", min(1, 13));
	return 0;

}
