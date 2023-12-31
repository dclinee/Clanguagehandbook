// type_support.c file.
#include <stdio.h>
#include <stdbool.h>
#include <stdalign.h>

int main(void) {
  printf("%d %d %d\n", true && false, true || false, !false);
  printf("%d %d\n", true ^ true, true + true);
  printf("%zu", alignof(short));

  return 0;
}
