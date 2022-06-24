// escape_char.cpp -- display escape character
#include <iostream>
using namespace std;

int main()
{
  char alarm = '\007';
  //char alarm = '\a';
  cout << alarm << "Don't do that again!\n";

  // C++ escape sequence codes
  char newline = '\n';
  cout << newline << "\n";
  char horizontal_tab = '\t';
  // horizontal tab is 8 spaces
  cout << "starts" << horizontal_tab << "end" << "\n";
  char vertical_tab = '\v';
  cout << vertical_tab << "\n";
  char backspace = '\b';
  cout << backspace << "\n";
  char carriage_return = '\r';
  cout << carriage_return << "\n";
  char alert = '\a';
  cout << alert << "\n";
  char backslash = '\\';
  cout << backslash << "\n";
  char question_mark = '\?';
  cout << question_mark << "\n";
  char single_quote = '\'';
  cout << single_quote << "\n";
  char double_quote = '\"';
  cout << double_quote << "\n";

  return 0;
}
