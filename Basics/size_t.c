/*
 * size_t datatype in C.
 * The datatype size_t is unsigned integral type.
 * It represents the size of any object in bytes and returned by sizeof operator.
 * It is used for array indexing and counting.
 * It can never be negative.
 * The return type of strcspn, strlen functions is size_t.
 * */
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
int main(void)
{
	// const size_t var_name;
	const size_t x = 150;
	int a[x];
	for(size_t i = 0; i < x; i++)
		a[i] = i;
	// SIZE_MAX maximum value of object of size_t type.
	printf("SIZE_MAX = %lu\n", SIZE_MAX);
	size_t size = sizeof(a);
	printf("size = %zu\n", size);
	return 0;
}
