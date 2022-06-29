// entity.c
#include <stdio.h>
int main(void)
{
  // [storage class] variable-type variable-name = value;
  // access to variable with variable declaration
  auto int entity = 3;

  printf("entity = %d\n", entity);
  printf("sizeof(entity) = %lu\n", sizeof(entity));
  printf("Address of entity = %p\n", &entity);

  // access to variable with other ways
  int *pt = &entity;
  printf("pt = %d\n", *pt);
  printf("sizeof(pt) = %lu\n", sizeof(pt));
  printf("Address of entity = %p\n", &pt);
  printf("Content of  pt = %p\n", pt);


  static int ranks[10];
  printf("ranks = %p\n", ranks);
  printf("sizeof(ranks) = %lu\n", sizeof(ranks));
  for (int i = 0; i < sizeof(ranks) / sizeof(int); i++)
    {
      printf("rank[i] = %d\n", ranks[i]);
    }
  printf("ranks + 2*entity = %d\n", *(ranks + 2 * entity));

  // pc is a modifiable lvalue, so *pc is lvalue but unmodifiable.
  const char *pc = "Be a string literal!";
  printf("pc = %s\n", pc);
  printf("sizeof(pc) = %lu\n", sizeof(pc));
  printf("Address of pc = %p\n", &pc);
  printf("Value of pc = %p\n", pc);
  printf("Content of pc = %c\n", *pc);




  return 0;
}
