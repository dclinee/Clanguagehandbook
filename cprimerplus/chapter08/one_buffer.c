/* C code to explain why not
 * clearing the input buffer
 * causes undesired outpus
 */
#include <stdio.h>

int main()
{
    char str[80], ch;
    // Scan input from user HelloWorld! for example

    scanf("%s", str);

    // Scan character from user 'a' for example
    ch = getchar();

    //Printing character array, prints "Hello World"
    printf("%s\n", str);

    //This does not print character 'a'
    printf("%c\n", ch);

    return 0;
}
