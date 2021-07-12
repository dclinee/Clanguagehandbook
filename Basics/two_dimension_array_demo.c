/*
 *二维数组的应用
 * 一个年级4个班，3门功课：语文、数学、英语
 * */
#include <stdio.h>

int main()
{
	int score[4][3];
	int average; //总平均分
	int v[3]; //每门课的平均分

	// 约定：0是语文，1是数学，2是英语
	//       v[0],    v[1],    v[2]
	
	printf("输入各班各门课的平均分： \n");
		
	int sum = 0;
	int i, j;

	for(i = 0; i < 3; i++){

		if(i==0)printf("请输入各班的语文平均分： \n");
		if(i==1)printf("请输入各班的数学平均分: \n");
		if(i==2)printf("请输入各班的英语平均分： \n");
		for( j = 0; j < 4; j++)
		{
			printf("输入%d班: \n", j+1);
			scanf("%d", &score[j][i]);
			sum = sum + score[j][i];

		}

		v[i] = sum / 4;

		sum = 0;
		
		printf("\n");
	}
	
	
	average = (v[0] + v[1] + v[2]) / 3;
	
	printf("语文： %d, 数学： %d, 英语： %d\n", v[0], v[1], v[2]);
	printf("总平均分： %d\n", average);
	return 0;
}
