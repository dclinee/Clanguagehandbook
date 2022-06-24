// hexoct2.cpp -- display values in hex and octal

#include <iostream>
using namespace std;
int main()
{
  //using namespace std;
  int chest = 42;
  int waist = 42;
  int inseam = 42;

  cout << "Monsieur cuts a striking figure!" << endl;
  cout << "chest = \t" << chest << "(decimal for 42)" << endl;
  cout << hex;
  cout << "waist = \t" << waist << " (hexadecimal for 42)" << endl;
  cout << oct;
  cout << "inseam = \t" << inseam << " (octal for 42)" << endl;

  return 0;
}
