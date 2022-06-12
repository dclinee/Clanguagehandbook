//increment_operator.c
#include <stdio.h>
int main(void)
{
  int y = 2;
  int n = 3;
  printf("current_n = %d\n", n);
  int nextnum = (y + n++) * 6;
  // using the current value of n,then incremeating the n
  printf("current_n = %d\n", n);
  printf("netxnu = %d\n", nextnum);
  int next_another_num = (y + ++n) * 6;
  // increating the value of n ,then using the value of n
  printf("next_another_num = %d\n", next_another_num);

  return 0;
}
