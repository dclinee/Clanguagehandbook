/* example of the strncpy() function */

#include <stdio.h>
#include <string.h>

int main()
{
	char src[40];
	char dest[12];

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is an example of the strncpy().");
	strncpy(dest, src, 10);


	printf("Final copied string: %s\n" ,dest);

	return 0;
}
