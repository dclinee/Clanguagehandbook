/* Here is the C code to demonstrate the working of function pointer. */
#include <stdio.h>
void addition(int i, int j)
{
  printf("The addition of both the input is %d\n", i + j);
}

void substraction(int i, int j)
{
  printf("The substraction of both the input is %d\n", i - j);
}

void multiplication(int i, int j)
{
  printf("The multiplication of both the input is %d\n", i * j);
}

void division(int i, int j)
{
  printf("The division of both the input is %d\n", i / j);
}


int main(void)
{
  void (*funcpointer_arr[])(int, int) = {addition, substraction, multiplication, division};
  int character;
  int i = 8, j = 8;
  printf("Please enter: 0 for addition, 1 for substraction, 2 for multiplication and 3 for addition.\n");
  scanf("%d", &character);
  if(character > 3)
    return 0;
  (*funcpointer_arr[character])(i, j);

  return 0;
}
