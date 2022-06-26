// while_end.c -- terminate whole loop
#include <stdio.h>

int main()
{
	int index = 1;
#if 0
	while(index < 5)
		printf("Good morning!\n");
	while(++index < 5){
		printf("Now index is:%d \n", index);
		printf("Good morning!\n");
	}

#endif
	while(index++ < 5){
		printf("Now index is:%d \n", index);
	}
        printf("The loop is finished!\n");

	return 0;

}
