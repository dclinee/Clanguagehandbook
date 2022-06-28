// preprocessor_directives.c -- introduce to CPP
/*
 The C preprocessor is a macro procesor that is used automatically by
the C compiler to transform your program before actual compilation (
Proprocessor direcives are executed before compilation.). It is called
a macro processor because it allows you to define macros, which are brief
abbreviations for longer constructs. A macro is a segment of code which
is replaced by the value of macro. Macor is defined by #define directive.
List of preprocessor directive:
1. #include
2. #define
3. #undef
4. #ifdef
5. #ifndef
6. #if
7. #elif
8. #else
9. #endif
10.#error
11.#pragma*/
/*The #include preprocessor directive is used to paste code of given file
 into current file. It is used inclue system-define and user-defined header
files. If iinclude file is not found, compiler renders error. It has There
variants:
1. #include <file>
This variant is used for system header files. It searches for a file named
file in a list of directories specified by you, then in a standard list of
system directories.

2. #include "file"
This variant is used for header files of your own program. It searches for
a file named file first in the current directory, then in the same directories
used for system header files. The current directory is the directory of the
current input file.

3. #include anything else
This variant is called a computed #include. Any #include directive whose
argument does not fit the above two forms is a computed include.*/

/*
 Macro's(#define)
Let's start with macro, as we discuss, a macro is a segment of code which is
replaced by the value of macro. Macor is defined by #define directive.
1. Object-like Macors
The object-like macro is an identifier that is replaced by value. It is widely
used to represent numeric constants.
*/
// For example
#if 0
#include <stdio.h>
#define PI 3.14159

int main(void)
{
  printf("%f\n", PI);

  return 0;
}
#endif
//Function-like Macros
//The function-like macro looks function call. For example:
//Proprocessor Formatting
#if 0
#include <stdio.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define FOO 1020
#undef FOO


int main(void)
{
  printf("Minimum between 10 and 20 is: %d.\n", MIN(10, 20));
  //  printf("Foo = %d\n", FOO); // using undef FOO is undeclared
  // compile-time error

  return 0;
}
#endif

// For example
#if 0
#include <stdio.h>
#define NUMBER 1

int main(void)
{
#if NUMBER == 0
  printf("Value of Number is: %d\n", NUMBER);
#elif NUMBER == 1
  printf("NUMBER == %d\n", NUMBER);
#else
  printf("Value of Number is non-__zero.");
#endif
  return 0;
}
#endif

// For example #error
#include <stdio.h>
#ifndef __MATH_H
#error First include then compile
#else
int main(void)
{
  float a;
  a = sqrt(7);
  printf("%f\n", a);
}
#endif
