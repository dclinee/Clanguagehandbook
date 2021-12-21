#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("please, enter student's score!\n");
    while(1)
    {
    
        int score = 0;
        int flag = 0;
        printf("please enter score:");
        scanf("%d", &score);

        switch(score/10)
        {
            case 10:
            case 9:
                printf("A");
                break;
            case 8:
            case 7:
                printf("B");
                break;
            case 6:
                printf("C");
                break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                printf("D");
                break;
            default:
                flag = 1;
                printf("score not exist!");
        }
        printf("\n");
        if(flag == 1)
            break;
    }
    return 0;
}
