// struct_variables.c
#include <stdio.h>
// structure declaration
struct book
{
  char title[100];
  char author[100];
  float value;
};
// structure variable definition
struct book library;
struct book doyle, panshin, *ptbook;
// structure initialization
struct book library =
  {
    "The Pious Pirate and the Devious Damsel",
    "Renee Vivotte",
    1.95
  };
int main(void)
{
  // designated initializer
  struct book surprise = {.value = 25.99};
  printf("surprise.value = %f\n", surprise.value);

  struct book gift =
    {
      .value = 25.99,
      .author = "James Broadfools",
      .title = "Rue for the Toad"
  };
  printf("gift.title = %s\n", gift.title);

  struct book Red_and_black =
    {
      .value = 25.99,
      .author = "James Broadfools",
      0.95L
    };
  printf("Red_and_black.value = %f\n", Red_and_black.value);

  printf("library.value = %f\n", library.value);

  //Renee Vivotte
  printf("library.author[2] = %c\n", library.author[2]);

  return 0;
}
