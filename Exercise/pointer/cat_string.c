// join the string
#include <stdio.h>
int main(void)
{
  char a[] = "abc";
  char b[] = "def";
  char c[7];

  char *pa = a;
  char *pb = b;
  char *pc = c;

  while(*pa != '\0')
    {
      *pc = *pa;
      pa++;
      pc++;
    }

  while(*pb != '\0')
    {
      *pc = *pb;
      pb++;
      pc++;
    }
  *pc = '\0';
  printf("c = %s\n", c);

  return 0;
}
