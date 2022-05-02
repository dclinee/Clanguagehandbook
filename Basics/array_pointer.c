// arrray_pointer
#include <stdio.h>

int main()
{
  char *fruits[5] = {"apple", "banana", "mango", "grapes", "orange"};

  for(int i = 0; i < 5; i++)
    {
      printf("%s\n", fruits[i]);
}
  return 0;

}
