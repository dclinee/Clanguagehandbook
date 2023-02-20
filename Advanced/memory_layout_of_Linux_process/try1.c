// try1.c
#include <stdio.h>
static void display(int i, int *ptr);

int main(void)
{
  int x = 5;
  int *xptr = &x;
  printf("In main():\n");
  printf("   x is %d and is stroed at %p.\n", x, &x);
  printf("   xptr points to %p which holds %d.\n", xptr, *xptr);
  display(x, xptr);

}

void display(int z, int *zptr)
{
  printf("In display():\n");
  printf("   z is %d and is stroked at %p.\n", z, &zptr);
  printf("   zptr points to %p which holds %p.\n", zptr, &zptr);

}
