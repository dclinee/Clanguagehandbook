// program4.1.c
#include <stdio.h>
int main(void)
{
  char arr[20];
  int i;
   arr[3] = 'x';
  //3[arr] = 'x';

  for (i = 0; i < 20; i++)
    {
      printf("%c", arr[i]);
    }
  printf("%c", arr[3]);
  return 0;
}
