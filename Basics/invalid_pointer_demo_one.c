// pointer_demo.c

#include <stdio.h>
#include <stdlib.h>

void fun_one(void)
{
  int n = 10;
  int *ptr = (int*)  malloc(sizeof(int) * n);
  for (int i = 0; i < 10; i++)
    {
      ptr[i] = i + 10;
    }
  for (int j =0; j < 10; j++)
  {
    printf("ptr:%p--->*ptr%d\n",ptr, *ptr);
    ptr++;
  }

  free(ptr);
  // access to the released memory in heaq
  for (int i = 0; i < 10; i++)
    {
      ptr[i] = i + 10;
    }
  for (int j =0; j < 10; j++)
  {
    printf("ptr:%p--->*ptr%d\n",ptr, *ptr);
    ptr++;
  }
}


int main(void)
{
  fun_one();
  return 0;
}
