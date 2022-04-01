/* Accessing structure members with pointer. */
/*
 To access members of structure using the structure variable,
 we used the dot . operator.But when we have a pointer of structure type,
 we use arrow -> to accesss structure members.
*/
#include <stdio.h>
struct my_structure
{
  char name[20];
  int number;
  int rank;
};

int main(void)
{
  struct my_structure variable = {"c_language", 35, 1};
  struct my_structure *ptr;
  ptr = &variable;

  printf("NAME: %s\n", ptr-> name);
  printf("NUMBER: %d\n", ptr-> number);
  printf("RANK: %d\n", ptr-> rank);
}
