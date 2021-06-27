/* exercise_0001 */

#include <stdio.h>

int main(void)
{
	int i, j, k;
	int count = 0;
//	printf("\n");

	for(i = 1; i < 5; i++){
		for(j = 1; j < 5; j++){
			for(k = 1; k < 5; k++){
				if(i != k && k != j && j != i){
					count += 1;
//					printf("%d\n", count);
					printf("%d, %d, %d\n", i, j, k);
				}
			}
		}
	}

	printf("The total of number: %d\n", count);
	return 0;
}
