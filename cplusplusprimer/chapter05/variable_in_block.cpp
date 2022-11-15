/// variable_in_block.cpp
#include <iostream>
using namespace std;
int main()
{
  int x = 10;
  int y = 100;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  {
    int x = 100;
    int y = 1000;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  return 0;
}
