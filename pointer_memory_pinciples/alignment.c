// alignment.c
#include <stdio.h>
struct test
{
  int a;
  char b;
  short c;
};

struct test_one
{
  char a;
  int b;
  short c;
};

#pragma pack(2) // specifie the compiler 2-byte alignment
struct test_two
{
  short a;
  int b;
  char c;
};
#pragma pack() // restore default alignment

int main(void)
{
  printf("The size of the struct test is %lu.\n", sizeof(struct test));
  printf("The size of the struct test_one is %lu.\n", sizeof(struct test_one));
  printf("The size of the struct test_two is %lu.\n", sizeof(struct test_two));
  return 0;
}
