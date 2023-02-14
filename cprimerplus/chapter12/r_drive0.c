// r_drive0.c
// compile with rand0.c
// gcc r_drive0.c rand0.c -o demo
#include <stdio.h>
extern unsigned int rand0(void);

int main(void)
{
  int count;
  for (count = 0; count < 5; count++) {
    printf("%d\n", rand0());
}
  return 0;
}
