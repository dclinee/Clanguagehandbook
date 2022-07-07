// init_ptr.cpp -- initialize a pointer
#include <iostream>
using namespace std;

int main()
{
  int higgens = 5;
  int *ptr = &higgens;

  cout << "value of higgens = " << higgens
       << "; Address of higgens = " << &higgens << endl;
  cout <<  "value of *ptr = " << *ptr
       << "; value of ptr = " << ptr << endl;

  return 0;
}
