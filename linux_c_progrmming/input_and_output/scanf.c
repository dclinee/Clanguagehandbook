// scanf.c
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int min, max, diff;


  printf("Please enter three numbers: ");
  scanf("%d%d%d", &min, &max, &max);
  printf("min = %d, max = %d, max = %d\n", min, max, max);

  #if 0
  char *name; // running-time segmentation fault
  printf("Please enter your name: ");
  scanf("%s", name);
  printf("name = %s\n", name);
  #endif
  #if 0
  char name[40];
  printf("Please enter your name: ");
  scanf("%s", name);
  printf("name = %s\n", name);
  #endif

  char *name = malloc(100);
  printf("Please enter your name: ");
  scanf("%s", name);
  printf("name = %s\n", name);
  free(name);
  // buffer overflow attack


  return 0;
}
