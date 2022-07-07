// union.cpp -- data type of union
#include <iostream>
using namespace std;

int main()
{
  union one4all
  {
    int int_val;
    long long_val;
    double double_val;
  };

  one4all pail;
  pail.int_val = 15;
  cout << pail.int_val;
  pail.double_val = 1.38;
  cout << pail.double_val;
  cout << endl;

  cout << "The size of union one4all: " << sizeof(one4all)
       << " bytes." << endl;
  cout << "The size of int_val: " << sizeof(int) << " bytes.\n";
  cout << "The size of long_val: " << sizeof(long) << " bytes.\n";
  cout << "The size of double_val: " << sizeof(double) << " bytes.\n";
  return 0;
}
