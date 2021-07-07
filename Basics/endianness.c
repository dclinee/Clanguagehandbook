#include <stdio.h>
#include <stdlib.h>

union Test{

	short s;
	char c[sizeof(short)];
};

int main(int argc, char **argv){
	union Test test;
	test.s = 0x0102;
	if(sizeof(short) == 2){
		if(test.c[0] == 1 && test.c[1] == 2){
			printf("big-endian\n");
		}
		else if(test.c[0] == 2 && test.c[1] == 1){
			printf("little-endian\n");	
		}
		else{
			printf("unknown\n");
		}
	}
	else{
		printf("sizeof(short) = %ld\n", sizeof(short));
	}
	exit(0);

}

