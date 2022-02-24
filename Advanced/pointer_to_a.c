#include <stdio.h>

int main(void)
{
  // define variable a
  int a = 1;
  // define one pointer to a
  int *pointer_to_a = &a;
  //let's change the variable a
  a += 1;
  *pointer_to_a +=1;
  /*
    we then referred to it using the dereferencing operator.
    we can also change the contents of the dereferenced variable.
  */
  // will print out 3
  printf("%d\n", *pointer_to_a);
  return 0;
}
