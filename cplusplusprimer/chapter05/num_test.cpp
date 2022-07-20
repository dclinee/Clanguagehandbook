// num_test.cpp -- use numeric test in for loop
#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the starting countdown value: ";
  int limit;
  cin >> limit;
  int i;
  for (i = limit; i; i--)
    {
      cout << "i = " << i << endl;
    }
  cout << "Done now that i = " << i << endl;

  return 0;
}
