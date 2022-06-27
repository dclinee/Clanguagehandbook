// example.c
#include <stdio.h>
int global = 1;

void my_print(int param)
{
  if(param == 1)
    {
      printf("param is 1\n");
    }
  for(int i = 0; i < 10; i++)
    {
      global += i;
    }
}
int main(int argc, char **argv)
{
  int param = 1;
  my_print(param);
  return 0;
}
