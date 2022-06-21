// escape_sequence_hex_oct.cpp

#include <iostream>
using namespace std;

int main()
{
  char ch = '\077';
  cout << ch << "\n";
  char ch1 = '\x3f';
  cout << ch1 << "\n";

  return 0;
}
