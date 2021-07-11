#include <stdio.h>
#include <stdlib.h>

#define TOTAL 4 // the total number of people

struct{
	char name[20];
	int num;
	char sex;
	char profession;

	union{
		float score;
		char course[20];	
	} sc;
} bodys[TOTAL];


int main(){
	int i;
	//输入人员信息
	for(i=0; i<TOTAL; i++){
		printf("Input info: ");
		scanf("%s %d %c %c", bodys[i].name, &(bodys[i].num), &(bodys[i].sex), &(bodys[i].profession));
		if(bodys[i].profession == 's'){ //如果是学生
			scanf("%f", &bodys->sc.score);
		}
		else{ //如果是老师
			scanf("%s", bodys[i].sc.course);
		}
		fflush(stdin);
	}


	//输出人员信息
	printf("\nName\t\tNum\tSex\tProfession\tScore / Course\n");	
	for(i=0; i<TOTAL; i++){
		if(bodys[i].profession == 's'){ //如果是学生
			printf("%s\t%d\t%c\t\t%f\n", bodys[i].name, bodys[i].num, bodys[i].sex, bodys[i].profession, bodys[i].sc.score);

		}
		else{
			printf("%s\t%d\t%c\t%c\t\t%s\n", bodys[i].name, bodys[i].num, bodys[i].sex, bodys[i].profession, bodys[i].sc.course);	
		}
	}

	return 0;
}

