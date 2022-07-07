// addpntrs.cpp -- pointer addition
#include <iostream>
using namespace std;

int main()
{
  double wages[3] = {10000.0, 20000.0, 30000.0};
  short stacks[3] = {3, 2, 1};

  //Here are two ways to get the address of an array
  double *pw = wages;    // name of an array = address
  short *ps = &stacks[0]; // or use address operator

  // with array element
  cout << "pw = " << pw << ", *pw = " << *pw << endl;
  pw = pw + 1;
  cout << "add 1 to the pw operator:\n";
  cout << "pw = " << pw << ", *pw = " << *pw << endl;
  cout << endl;
  cout << "ps = " << ps << ", *ps = " << *ps << endl;
  ps = ps + 1;
  cout << "add 1 to the ps operator:\n";
  cout << "ps = " << ps << ", *ps = " << *ps << endl;
  cout << endl;

  cout << "access two elements with array notation\n";
  cout << "stacks[0] = " << stacks[0]
       << ", stacks[1] = " << stacks[1] << endl;
  cout << "access two elements with pointer notation\n";
  cout << "*stacks = " << *stacks
       << ", *(stacks + 1) = " << *(stacks + 1) << endl;

  cout << "sizeof(wages) " << sizeof(wages) << " bytes.\n";
  cout << "sizeof(pw) = " << sizeof(pw) << " bytes.\n";

  return 0;
}
