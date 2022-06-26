// relational_operator.c
#include <stdio.h>
void int_while(void);
void char_while(void);
void scanf_while(void);

int main(void)
{
  int_while();
  scanf_while();
  return 0;
}

void int_while(void)
{
  int number;
  scanf("%d", &number);
  while(number <= 6)
    {
      printf("Your entered number is %d\n", number);
      number++;
      scanf("%d", &number);
    }
  printf("The loop is finished.\n");
}
void char_while(void)
{
  int count = 0;
  char ch ;
  scanf("%c", &ch);
  while( ch != '$')
    {
      count++;
      scanf("%c", &ch);
    }

}

void scanf_while(void)
{
  float num;
  float sum;
  printf("Enter the number for summed: ");
  while(scanf("%f", &num) == 1)
    {
      sum = sum + num;
      scanf("%f", &sum);
    }
  printf("The sum is %f.\n", sum);
}
