/* c code to implement Fibonacci series */

#include <stdio.h>

//Function for fibonacci

int fib(int n)
{
	// Stop condition
	if(n == 0)
		return 0;
	
	// Stop condition
	if(n == 1 || n == 2)
		return 1;

	// Recursion Function
	else
		return (fib(n - 1) + fib(n - 2));
}

int main()
{
	// Initialize variable n.
	//int n =5;
	int i, n;
	printf("Please input your number n: ");
	scanf("Your number n is:%d", &n);
	printf("Fibonacci series of %d numbers is: ", i);

	// for loop to print the fibonacci series.
	for(int i = 0; i < n; i++)
	{
		printf("%d ", fib(i));	
	}

	printf("\n");
	return 0;
}
