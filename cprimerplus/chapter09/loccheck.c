#include <stdio.h>

void mikado(int);
int main()
{
	int poch = 2, bah = 5;

	printf("In main(), poch = %d and &poch = %p\n", poch, &poch);
	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
	mikado(poch);


	return 0;
}

void mikado(int bah)
{
	int pooh = 10;

	
	printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
	printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);


}

