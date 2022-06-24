// wide_char_type.cpp -- expand 8 bits char with 16 bits char
#include <iostream>
#include <climits>
using namespace std;

int main()
{
  // basic char
  char aoa = 'p';
  cout << "aoa = " << aoa << endl;
  cout << "CHAR_BIT = " << CHAR_BIT << endl;
  cout << "CHAR_MIN = " << CHAR_MIN << endl;
  cout << "CHAR_MAX = " << CHAR_MAX << endl;

  // width char
  wchar_t bob = L'p'; // a wide-character constant
  wcout << "bob = " << bob << endl;

  wcout << L"tall" << endl; // outputing a wide-character string


  // sizeof(char) vs sizeof(wchar_t)
  cout << "sizeof(char) = " << sizeof(char) << endl;
  wcout << "sizeof(wchar_t) = " << sizeof(wchar_t) << endl;


  return 0;
}
