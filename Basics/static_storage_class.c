#include <stdio.h>

static int i;
int k = 0;
void func_one(void);
void func_two(void);

int main()
{

	for(k =0; k < 10; k++)
	{
		
		func_one();
		func_two();
	}
	return 0;
}

void func_one(void)
{
	static int i = 0;
	i++;
	printf("i = %d\n", i);
}


void func_two(void)
{
	int j = 0;
	j++;
	printf("j = %d\n", j);
}
