// array of pointer
#include <stdio.h>

int main(void)
{
    // array of ponter
    char *city_ptr[4] ={
        "Chennai",
        "Kolkata",
        "MUmbai",
        "New Delhi"
    };
    // temporary variable
    int r, c;
    // print cites
    for(r = 0; r < 4; r++)
    {
        c = 0;
        while(*(city_ptr[r] + c) != '\0')
        {
            printf("%c", *(city_ptr[r] + c));
            c++;
        }
        printf("\n");
    }
    return 0;
}
