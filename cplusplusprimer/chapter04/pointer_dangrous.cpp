// pointer_dangrous.cpp -- pointer is initialized before using it
#include <iostream>
using namespace std;

int main()
{
  long num = 12;
  long *fellow = &num;
  *fellow = 223323;
  cout << "value of *fellow = " << *fellow << endl;


  return 0;
}
