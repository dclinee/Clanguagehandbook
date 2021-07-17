/* example of the memset() function */

#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];

	strcpy(str, "This is string.h library function.");
	puts(str);

	memset(str, '#', 10);
	puts(str);


	return 0;
}
