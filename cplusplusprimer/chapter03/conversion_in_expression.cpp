// conversion_in_expression.cpp -- type conversion_in_expression
#include <iostream>
using namespace std;

int main()
{
  short chickens = 20;
  cout << "chickens = " << chickens << endl;
  short ducks = 35;
  cout << "ducks = " << ducks << endl;
  short fowl = chickens + ducks;
  cout << "fowl = " << fowl << endl;

  return 0;
}
