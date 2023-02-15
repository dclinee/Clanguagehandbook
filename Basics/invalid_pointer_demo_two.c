// invalid_pointer_demo_two.c

#include <stdio.h>
#include <stdlib.h>

int* fun_one(void)
{
  static int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
  // warning: function returns address of local variable
  return arr;
}


int main(void)
{
 int *ptr = fun_one();
 for (int i = 0; i < 10; i++)
   {
     printf("%p----->%d\n", ptr, *ptr);
     ptr++;
   }
  return 0;
}
