#include <stdio.h>

int main(void)
{
	int a, b, c;
	for(a = 9; a >= 1; a--)
	{
		for(b = 9; b >= a; b--)
		{
			printf(" %d * %d = %2d", b, a, c = b*a);
		}
	printf("\n");
	}
	return 0;
}
