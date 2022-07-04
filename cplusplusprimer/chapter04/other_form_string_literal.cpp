// other_form_string_literal.cpp -- other forms string constant
#include <iostream>
using namespace std;

int main(void)
{
  wchar_t title[] = L"Chief Astrogator"; // w_char string
  char16_t name[] = u"Felonia Ripova";   // char16_t string
  char32_t car[] = U"Humber Super snipe"; // char32_t string

  cout << title << endl;
  cout << name << endl;
  cout << car << endl;

  return 0;
}
