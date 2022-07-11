// structure_declaration.c
#include <stdio.h>
struct book
{
  char title[20];
  char author[20];
  float value;
};
struct book library;
int main(void)
{
  printf("The size of the book: %lu\n", sizeof(struct book));
  return 0;
}

void test()
{
  struct book dickens;
}
