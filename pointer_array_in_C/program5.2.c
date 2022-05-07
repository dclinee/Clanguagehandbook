// program5.2.c
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

void show_name(struct tag *p);


int main(void)
{
  struct tag *st_ptr; // a pointer to the structure
  st_ptr = &my_struct;
  strcpy(my_struct.lname, "deng");
  strcpy(my_struct.fname, "changlin");
  printf("\n%s", my_struct.lname);
  printf("%s\n", my_struct.fname);
  my_struct.age = 38;
  show_name(st_ptr);

  return 0;
}

void show_name(struct tag *p) /* p pointer to the structure*/
{
  printf("\n%s", p->lname);
  printf("%s ", p->fname);
  printf("%d\n", p->age);
}
