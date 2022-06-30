// test_gdb.cpp -- testing gdb commands
#include <iostream>
using namespace std;
int divint(int x, int y);

int main()
{
  int x = 5, y = 2;
  cout << divint(x, y);

  x = 3, y = 0;
  cout << divint(x, y);

  return 0;
}

int divint(int x, int y)
{
  return x / y;
}
