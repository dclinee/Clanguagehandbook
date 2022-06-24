// char16_and_char32_type.cpp -- char16_t and char32_t types
#include <iostream>
using namespace std;

int main()
{
  char16_t ch1 = u'q'; // basic character in 16-bit form
  cout << "ch1 = " << ch1 << endl;
  char32_t ch2 = U'\U0000222B'; // universal character name in 32-bit form
  cout << "ch2 = " << ch2 << endl;

  return 0;
}
