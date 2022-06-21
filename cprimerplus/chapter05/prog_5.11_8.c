// prog_5.11_8.c
#include <stdio.h>
int main(void)
{
  int first_number;
  int second_number;
  int moduli_number;

  printf("This program computes moduli.\n");
  printf("Enter an integer to serve as the second operand: ");
  scanf("%d", &second_number);
  printf("Now enter the first operand: ");
  scanf("%d", &first_number);

  while (first_number > 0)
    {
      // printf("Now enter the first operand: ");
      //scanf("%d", &first_number);
      moduli_number = first_number % second_number;
      printf("%d %% %d is %d\n", first_number, second_number, moduli_number);
      printf("Enter the next number for first operand(<= 0 to quit): ");
      scanf("%d", &first_number);
    }
  printf("Done!\n");

  return 0;
}
