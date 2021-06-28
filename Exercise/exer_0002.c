/* resursion */
/*
 * 由n个小朋友，最大的一个年龄比n-1个小两岁，第n-1个比第n-2个小两岁，依次下去，最后一个小朋友为6岁，求最大小朋友几岁？
 */

#include <stdio.h>

int age(int n);

int main()
{
	int num;
	
	num = age(5);

	printf("The maxage is: %d\n", num);

	return 0;
}

int age(int n)
{
	
	if(n <= 1){
		return(6);
	}

	
	else{
		return(age(n-1) +2);
	}


}
