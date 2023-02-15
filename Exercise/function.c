// function.c
#include <stdio.h>

unsigned short int rotate16left(unsigned short int num, int n)
{
  return (num >> n) | (num << (sizeof(num) * 8 -n));
}

unsigned short int rotate16right(unsigned short int num, int n)
{
  return (num << n) | (num >> (sizeof(num) * 8 -n));
}

int main(void)
{
  unsigned short int num = 0x2345;

  printf("original number:%#x\n", num);
  printf("Rotated left: %#x\n", rotate16left(num, 4));
  printf("Rotated right: %#x\n", rotate16right(num, 4));

  return 0;
}
