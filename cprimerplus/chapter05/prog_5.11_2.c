// prog_5.11_2.c
#include <stdio.h>
void print_number(void);
int main(void)
{
  print_number();
  return 0;
}

void print_number(void)
{
  int number;
  printf("Please, enter a integer number:");
  scanf("%d", &number);
  for( int i = number; i <= (number + 10); i++)
    {
      printf("%d\t", i);
    }
  printf("\n");
}
