// exer_5.11_10.c
#include <stdio.h>
void a_function(void);
void b_function(void);
void c_function(void);

int main(void)
{
  a_function();
  b_function();
  c_function();

  return 0;
}

void a_function(void)
{
  int x = 0;
  while (++x < 3)
    printf("%4d", x);
  printf("\n");
}

void b_function(void)
{
  int x = 100;
  while (x++ < 103)
    printf("%4d\n", x);
  printf("%4d\n", x);
}

void c_function(void)
{
  char ch = 's';

  while (ch < 'w')
    {
      printf("%c", ch);
      ch++;
    }
  printf("%c\n", ch);
}
