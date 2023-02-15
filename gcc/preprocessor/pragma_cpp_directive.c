// pragam_cpp_directive.c
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
void func();
#pragma startup func
#pragma exit func

void main()
{
  printf("\nI in main().");
  getchar();

}

void func()
{
  printf("\nI in func()");
  getchar();

}
