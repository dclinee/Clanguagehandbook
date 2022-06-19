// variable_define.c
#include <stdio.h>

int main(void)
{
  /* [storage_type] datatype_variable_name = value;*/
  auto int i = 1;
  static int j = 1;
  register int k = 1;
  //  extern int t;

  printf("i = %d\n", i);
  printf("i = %d\n", j);
  printf("k = %d\n", k);
  // printf("t = %d\n", t);

  return 0;
}
