// char_signed_unsigned.cpp -- signed char and unsigned char

#include <iostream>
using namespace std;

int main()
{
  char fodo; // may be signed, may be unsigned
  unsigned char bar; // definitely unsigned
  signed char snark; // definitely signed

  fodo = 200;
  cout << "fodo = " << fodo << endl;
  bar = 200;
  cout << " bar = " << bar << endl;
  snark = 200;
  cout << "snark = " << snark << endl;

  return 0;
}
