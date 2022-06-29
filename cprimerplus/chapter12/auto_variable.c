// auto_variable.c
#include <stdio.h>
int loop(int n)
{
  int m; // scope of variable m
  scanf("%d", &m);
  {
    int i; // scope of variables m and i
    for(i = m; i < n; i++)
      {
        puts("i is local variable to a sub-block.\n");
      }
  }
  return m; // scope of variable m; is disappeared
}

int main(void)
{
  loop(100);

  return 0;
}
