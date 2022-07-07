// address.cpp -- using the & opeator to find address
#include <iostream>
using namespace std;

int main()
{
  double cups = 4.5;
  int donuts = 6;

  cout << "donuts value = " << donuts;
  cout << " and donuts address = " << &donuts << endl;
  // NOTE: you may need to use unsigned (&donuts)
  // and unsigned (&cups)
  cout << "cups value = " << cups;
  cout << " and cups address = " << &cups << endl;
  cout << (long) &cups - (long) (&donuts) << endl;


  return 0;
}
