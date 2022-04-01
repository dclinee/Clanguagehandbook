#include <stdio.h>
int *build_array();
int main()
{
    int *p;
    p = build_array();
    for(int k = 0; k < 5; ++k)
        printf("%d\n", p[k]);
    return 0;
}

int* build_array()
{
    static int arr_int[5] = {1, 2, 3, 4, 5};
    return arr_int;
}
