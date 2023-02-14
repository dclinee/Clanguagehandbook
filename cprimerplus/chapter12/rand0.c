// rand0.c
#include <stdio.h>
static unsigned long int next = 1;
unsigned int rand0(void)
{
  next = next * 1103515245 + 12345;
  return (unsigned int) (next / 65536) % 32768;
}

#if 0
int main(void)
{
  int rand_numbers = rand0();
  printf("rand_numbers = %d\n", rand_numbers);

  return 0;
}
#endif
