// exer_p1.c
#include <stdio.h>
void address(void  *add)
{
  printf("The address %p is: \n", &add);
}
void value(int value)
{
  printf("The value %d is: \n", value);
}
void size(size_t size)
{
  printf("The size %lu is: \n", sizeof(size));
}
#include <stdio.h>
int main(void) {
  char char_a = 'A';
  int int_b = 0;
  double double_c = 3.14159;
  char *char_p = &char_a;
  int *int_p = &int_b;
  double *double_p = &double_c;

  //address(char_a);
  //address(int_b);
  //address(double_c);
  address(char_p);
  address(int_p);
  address(double_p);

  value(char_a);
  value(int_b);
  value(double_c);
  //value(char_p);
  //value(int_p);
  //value(double_p);

  size(char_a);
  size(int_b);
  size(double_c);
  //size(char_p);
  //size(int_p);
  //size(double_p);
  return 0;
}
