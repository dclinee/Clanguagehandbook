//basics of pointer
#include <stdio.h>

int main()
{

	int a = 10;

	int *p1 = &a;

	char ch = 'c';

	char *p2 = &ch;
	/*指针变量占有的内存空间大小*/
	printf("p1 size: %ld p2 size: %ld\n", sizeof(p1), sizeof(p2));
	
	/*直接访问*/
	a = 2021;
	ch = 'A';
	printf("a:%d ch:%c\n", a, ch);

	/*间接访问*/

	*p1 = 30;
	*p2 = 'H';
	printf("a:%d ch:%c\n", *p1, *p2);


	return 0;
}
