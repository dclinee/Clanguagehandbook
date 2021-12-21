#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // no break 
    while(1)
    {
        int x = 0;
        scanf("%d", &x);
        switch(x)
        {
            case 1:
                printf("1");
            case 2:
                printf("2");
            case 3:
                printf("3");
            default:
                printf("others!");
        }
        printf("\n");
        // while loop stop
        if(x == 0)
            break;
    }
        // case with break
    while(1)
    {
        int x = 0;
        scanf("%d", &x);
        switch(x)
        {
            case 1:
                printf("1");
                break;
            case 2:
                printf("2");
                break;
            case 3:
                printf("3");
                break;
            default:
                printf("others!");
        }
        printf("\n");
        // while loop stop
        if(x == 0)
            break;
        // case with break
   }
        return 0;
}
