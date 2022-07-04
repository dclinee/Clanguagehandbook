// struct.c
#include <stdio.h>
int main(void)
{
  struct inflatable
  {
    char name[20];
    float volume;
    double price;
  };

  struct inflatable hat;
      hat.volume = 12.0;
      hat.price = 200.23;

      printf("Please, enter your hat.name: ");
      scanf("%s", hat.name);
      printf("Here was your information:\n");
      printf("hat.name = %s.\n", hat.name);
      printf("hat.volume = %f.\n", hat.volume);
      printf("hat.price = %lf.\n", hat.price);

  return 0;
}
