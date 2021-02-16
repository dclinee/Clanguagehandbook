/* Initialization of static variables */
#include <stdio.h>

int foo()
{
	return 5;
}
int main(void)
{
	static int i = foo();
	printf("Value of i: %d\n", i);
/*If a static variable is not explicity initialized,
 * then it is initialized as 0.
 */
	return 0;
}
