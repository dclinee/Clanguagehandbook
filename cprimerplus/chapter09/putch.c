// putch.c
#include <stdio.h>
#include <string.h>
int main()
{
  for (const char *s = "Hello, OS World!\n"; *s; s++){
    putchar(*s);
  }
  return 0;
}
