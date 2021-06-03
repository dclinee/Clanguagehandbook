#include <stdio.h>
#include <assert.h>

int main(void)
{

	int a;
	char str[50];

	printf("Enter an integer value: ");
	scanf("%d", &a);
	assert(a >= 10);
	//assert(condition);here, condition must bu boolean.
	printf("Integer entered is %d\n", a);

	printf("Enter string: ");
	scanf("%s", str);
	assert(str != NULL);
	printf("String entered is: %s\n", str);

	return 0;
}
