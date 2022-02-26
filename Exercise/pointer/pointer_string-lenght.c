#include <stdio.h>

int string_lenght(char *s)
{
    char *p = s;

    while(*p)
        ++p;
    
    return(p - s);
}

int main(void)
{
    int i;
    char *s[] =
    {
        "Git tutorials",
        "Pointer in string lenght function"
    };

    for (i = 0; i < 2; i++)
    printf("string lenght of %s = %d\n", s[i], string_lenght(s[i]));
    return 0;
}
