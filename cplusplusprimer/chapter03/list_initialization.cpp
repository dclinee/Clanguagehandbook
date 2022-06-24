// list_initialization.cpp -- with {} to convert variables types when initialize variables
#include <iostream>
using namespace std;

int main()
{
  const int code = 66;
  int x = 66;

  //char c1 {31325}; // narrowing, not allowed
  char c2 = {66}; // allowed because char can hold 66
  char c3 {code}; // ditto
  char c4 = {x}; // not allowed, x is not constant
  x = 31325;
  char c5 = x;   // allowed by this form of initialization

  //cout << "c1 = " << c1 << endl;
  cout << "c2 = " << c2 << endl;
  cout << "c3 = " << c3 << endl;
  cout << "c4 = " << c4 << endl;
  cout << "c5 = " << c5 << endl;

  return 0;
}
