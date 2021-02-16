/* Initialization of static variables */
#include <stdio.h>

int main(void)
{
	static int i;
	printf("Value of i: %d\n", i);
/*If a static variable is not explicity initialized,
 * then it is initialized as 0.
 */
	return 0;
}
