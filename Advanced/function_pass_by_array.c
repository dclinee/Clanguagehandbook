// functions with array parameters
#include <stdio.h>
int add_array(int *p, int size);
int main()
{
    int my_array[5] = {1, 2, 3, 4, 5};
    printf("Total summation is %d.\n", add_array(my_array, 5));
    return 0;
}

int add_array(int *p, int size)
{
    int total = 0;
    int i;
    for(i = 0; i < size; ++i)
        total += p[i];
    return total;
}
