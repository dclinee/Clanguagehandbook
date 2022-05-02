// pointer_arithmetic_operation.c
/*
 An arithmetic operation on a pointer means that we are modifying the
address value of the pointer and not the value pointed by the pointer.
Now, let us look at an example of pointer arithmetic with arrays to
understand the pointer with array concept deeply.*/
#include <stdio.h>

int main()
{
  // array declaration and initialization
  int a[5] = {5, 6, 7, 8, 9}, i;

  // valid in case of array but not valid in case of single integer value
  int *ptr = a;

  // all representations prints the base address of the array
  printf("ptr : %p, &a[0] : %p, a : %p, &a : %p\n", ptr, &a[0], a, &a);


  for(i = 0; i < 5; i++)
    {
      // printing address values
      printf("[inders %d] Address : %p\n", i, (ptr + i));
}
  printf("\n");

  //gives address of next byte after array's last element
  printf("&a : %p, &a + 1 : %p\n", &a, &a + 1);
  //gives the address of the next element
  printf("a : %p, a + 1 : %p\n", a, a + 1);
  //gives value at index 1
  printf("*(a + 1) : %d\n", *(a + 1));
  // gives (value at index 0) + 1
  printf("*a + 1 : %d\n", *a + 1);
  // gives (value at index 0) / 2, we can't perform *(p/2) or *(p*2)
  printf("(*ptr / 2) : %d\n", (*ptr / 2));
  return 0;
}
