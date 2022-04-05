/* 逻辑运算符的短路特性 */
//什么是逻辑运算符的短路特性
//短路特性：
//逻辑表达式求解时，并非所有的逻辑运算符都被执行，
//只是在必须执行下一个逻辑运算符才能求出表达式的解时，才执行该运算符。

#include <stdio.h>

int main(void)
{
	int a = 1, b = 2, c = 3, d = 4;

	int m = 1, n = 1;

	(m = a > b) ||(n = c < d); 

	printf("m = %d\nn = %d\n",m,n);
//	(m = a > b) && (n = c < d); 

//	printf("m = %d\nn = %d\n",m,n);

	return 0;
}
