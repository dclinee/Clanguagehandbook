// my_puts.c
#include <stdio.h>
void test_puts(void);
void test_puts_end(void);

int main(void)
{
  char greeting[50] = "Hello, and" " how are" " you"
    " today!";
  puts(greeting);

  test_puts_end();
  test_puts();
  return 0;
}

void test_puts_end(void)
{
  int i;
  char string[20];
  for (i = 0; i < 10; i++)
    {
      string[i] = 'a';
    }
  string[10] = '\0';
  puts(string);
  //  getchar();
}

void test_puts(void)
{
  const char string[] = "This is a example output string.";
  puts(string);
  puts("");

  return ;
}
