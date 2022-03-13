#include <stdio.h>
int main(void)
{
    int int_m = 100;
    float float_x = 100.1000001;
    char char_z = 'b';

    // Using & operator
    printf("Using & operator\n");
    printf("The address of int_m = %p\n", &int_m);
    printf("The address of float_x = %p\n", &float_x);
    printf("The address of char_z = %p\n", &char_z);
    
    printf("----------------------------------------------------------\n");
    // Using & and * operator
    printf("Using & and * operator\n");
    printf("The value at address of int_m = %d\n", *(&int_m));
    printf("The value at address of float_x = %f\n", *(&float_x));
    printf("The value at address of int_m = %c\n", *(&char_z));

    printf("----------------------------------------------------------\n");
    // Using only pointer variable
    printf("Using only pointer variable\n");
    int *int_m_of_pointer =NULL;
    float *float_x_of_pointer = NULL;
    char *char_z_of_pointer = NULL;

    int_m_of_pointer = &int_m;
    float_x_of_pointer = &float_x;
    char_z_of_pointer = &char_z;
    printf("The address of int_m = %p\n", int_m_of_pointer);
    printf("The address of float_x = %p\n", float_x_of_pointer);
    printf("The address of char_z = %p\n", char_z_of_pointer);

    printf("----------------------------------------------------------\n");
    // Using only pointer operator
    printf("Using only pointer operator\n");
    int *int_pointer_to_m = &int_m;
    float *float_pointer_to_x = &float_x;
    char *char_pointer_to_z = &char_z;

    printf("The value at address of int_m = %d\n", *int_pointer_to_m);
    printf("The value at address of float_x = %f\n", *float_pointer_to_x);
    printf("The value at address of char_z = %c\n", *char_pointer_to_z);

    return 0;
}
