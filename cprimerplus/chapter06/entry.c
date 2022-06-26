// entry.c
#include <stdio.h>
int main(void)
{
  const int secret_code = 13;
  int code_entered;
  printf("To enter the triskaidekaphobia therapy club,\n");
  printf("Please enter the secret code number: ");
  scanf("%d", &code_entered);

  while (code_entered != secret_code)
    {
      printf("To enter the triskaidekaphobia therapy club,\n");
      printf("Please enter the secret code number: ");
      scanf("%d", &code_entered);
    }
  printf("configuration! You are cured!\n");

  return 0;
}
