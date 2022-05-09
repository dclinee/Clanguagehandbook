/*The syntax of function pointers can sometimes be confusing.
 So we can use a typedef statement to make things simpler.*/
#include <stdio.h>

int sum(int x, int y){ return x + y;}
int sub(int x, int y){ return x - y;}
int sum_of_squares(int x, int y){ return x*x + y*y; }
int mystery(int x, int y, int(*fn)(int, int))
{ return ((*fn)(x, y));}

typedef int(*ptr)(int, int);
//ptr fp = sum;
ptr convert(const char code)
{
if(code == '+') return &sum;
if(code == '-') return &sub;
}

int main()
{
  int (*ptr)(int, int);
  ptr = convert('+');
  printf("%d\n", ptr(2, 4));
  ptr = convert('-');
  printf("%d\n", ptr(2, 4));
  printf("%d\n", mystery(10, 10, sum));
  printf("%d\n", mystery(10, 10, sub));
  printf("%d\n", mystery(10, 10, sum_of_squares));

  return 0;
}
