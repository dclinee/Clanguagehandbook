// const.cpp
#include <iostream>
#define MONTHS 12 // define symbol constant in ANSI C
using namespace std;

int main()
{
  // const typoe name = value
  const int Months = 12; // Months is symbol constant for 12
  cout << "Months = " << Months << endl;

  // declare symbol constant and initialize symbol constant
#if 0
  const int toes;
  toes = 10; // assignment of read-only variable
  cout << "toes = " << toes << endl;

#endif
  cout << "MONTHS = " << MONTHS << endl;

  return 0;
}
