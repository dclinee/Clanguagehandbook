// program5.1.c
#include <stdio.h>
#include <string.h>
struct tag
  {
    char lname[20];
    char fname[20];
    int age;
    float rate;
  };

  struct tag my_struct; // declare the structure my_struct

int main(void)
{
  strcpy(my_struct.lname, "deng");
  strcpy(my_struct.fname, "changlin");
  printf("\n%s", my_struct.lname);
  printf("%s\n", my_struct.fname);

  return 0;
}
