/* Program for pointer arithmetic. */
#include <stdio.h>

int main(void)
{
	int m = 5, n = 10, s = 0;
	int *p_1;
	int *p_2;
	int *p_3;

	p_1 = &m;
	p_2 = &n;

	printf("p_1 = %p\n", p_1);
	printf("p_2 = %p\n", p_2);

	s = *p_1 + *p_2;
	printf("*p_1 + *p_2 = %d\n", s);

	p_3 = p_1 - p_2;
	printf("p_1 - p_2 = %p\n", p_3);

	p_1++;
	printf("p_1++ = %p\n", p_1);

	p_2--;
	printf("P_2-- = %p\n", p_2);

	printf("p_1 + p_2 = %d\n", p_1 + p_2);




	return 0;
}
