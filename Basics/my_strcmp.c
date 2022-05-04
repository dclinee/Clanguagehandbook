#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "Microchip";
    if(0 == strcmp(str, "Microchip"))
        printf("They match!\n");
    while(1);
    return 0;
}
