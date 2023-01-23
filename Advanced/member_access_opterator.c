// Member Access Opterators
/*[] array subscript */
/* * pointer dereference*/
/* member access*/
/* member access through pointer.*/
#include <stdio.h>
void array_subscript(void);
void pointer_dereference(void);
void member_access_with_dot(void);
void member_access_with_pointer(void);

int main(void)
{
  printf("Printing the result of array subscript function\n");
  array_subscript();
  pointer_dereference();
  return 0;
}

void array_subscript(void)
{
  /*
   Subscript
  The array subscript expression has the form
  pointer-expression[integer-expression] (1)
  integer-expression[pointer-expression] (2)
  where
  pointer-expression - an expression of type pointer to complete object
  integer-expression - an expression of integer type*/
  int a[3] = {1, 2, 3};
  printf("%d %d\n", a[2], //n == 3
         2[a]); // same, n == 3
  a[2] = 7; // subscripts are lvalues
  int n[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int (*p)[3] = &n[1]; // element of n are array
  printf("%d %d %d\n", (*p)[0], p[0][1], p[0][2]);// access n[1][] via p
  int x = n[1][2]; // apply [] again to the array n[1]
  printf("%d\n", x);

  printf("%c %c\n", "abc"[2], 2["abc"]); // String literals are array too

}

void pointer_dereference(void)
{
  int n = 1;
  int *p = &n;
  printf("*p = %d\n", *p); // the value of *p is what's stored in n
  *p = 7; // *p is lvalue
  printf("*p = %d\n", *p);
}
