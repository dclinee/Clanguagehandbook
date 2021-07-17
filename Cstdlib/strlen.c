/* example of the function strlen() */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int len;

	strcpy(str, "This is an example of C library function strlen().");

	len = strlen(str);
	printf("The length of |%s| is |%d|\n", str, len);

	return 0;
}
