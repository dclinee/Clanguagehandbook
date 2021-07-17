/* example of the strcpy() function */

#include <stdio.h>
#include <string.h>

int main()
{
	char src[40];
	char dest[100];
	int len;

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is an example of strcpy() function");
	strcpy(dest, src);
	len = strlen(dest);	

	printf("Final copied string: %s\n", dest);
	printf("The length of dest is : %d\n", len);

	return 0;
}
