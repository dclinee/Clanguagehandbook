/* Pointer to array of structures in C. */
#include <stdio.h>
struct Boook
{
  char name[10];
  int price;
};
int main(void)
{
  struct Book a;    // Single structure variable
  struct Book* ptr; //Pointer of structure type
  ptr = &a;

  struct Book b[10]; //Array of structure variables
  struct Book* p; //Pointer of structure type
  p = &b;
  return 0;
}
