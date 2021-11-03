#include <stdio.h>

int main(void)
{
    char ch;
    int col = 0;

    while(1)
    {

        ch = getchar();

        switch(ch)
        {

            case 'w':
            case 'W':
                printf("up");
                break;
            case 'a':
            case 'A':
                printf("left");
                break;

            case 's':
            case 'S':
                printf("down");
                break;

            case 'd':
            case 'D':
                printf("right");
                break;
            default:
                continue;
        }

        col++;
        if(col == 20)
        {

            printf("\n");
            col = 0;
        }
    }

    return 0;
}
