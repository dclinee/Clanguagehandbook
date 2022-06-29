// auto_storage_duration.c
#include <stdio.h>
void bore(int number)
{
  int inder;
  for (inder = 0; inder < number; inder++)
    {
      puts("They don't make them the way they used to.\n");
    }
  return ;
}

void more(int number)
{
  int index;
  index = number;
  static int ct = 0;

  printf("inder = %d\n", index);
  printf("ct = %d\n", ct);
}

int main(void)
{
  bore(3);
  more(3);

  return 0;
}
