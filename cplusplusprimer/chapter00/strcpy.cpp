// strcpy -- copying one string to another
#include <iostream>
using namespace std;

int main(void)
{
  // strings declarationing
  char str1[] = "hello world";
  char str2[] = "hello cplusplusprimer";

  char str3[40];
  char str4[40];

  char str5[] = "DCL";
  // String copy used
  strcpy(str2, str1);
  strcpy(str3, "Copy sucessfully!");
  strcpy(str4, str5);

  // String printed
  cout << "str1: " << str1 << "\nstr2: " << str2 << "\nstr3: " <<
        str3 << "\nstr4: " << str4 << "\n";
  return 0;
}
