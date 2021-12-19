/* pointer execise01 */
// 定义一个整形数组，使用指针累加数组中所有元素的和
#include <stdio.h>

int main()
{
    int *p, arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    p = arr;
    while(p < arr + 10)
    {
        sum += *p;
        p++;
    }
    printf("sum = %d\n", sum);

    return 0;
}
