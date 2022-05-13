// testing compiler allocated memory space for program
#include <stdio.h>
int main(void)
{
  char my_string[40] = "Ted";
  char my_name[] = "Ted";
  char *my_pointer = "Ted";

  printf("%s = %lu\n", my_string, sizeof(my_string));
  printf("%s = %lu\n", my_name, sizeof(my_name));
  printf("%s = %lu\n", my_pointer, sizeof(my_pointer));

  return 0;
}
