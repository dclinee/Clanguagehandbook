// mixtypes.cpp -- some type combinations
#include <iostream>
using namespace std;

struct antarctica_year_end
  {
    int year;
    /* soem really intersting data, etc.*/
  };
int main()
{
  antarctica_year_end s01, s02, s03;
  s01.year = 1998;
  antarctica_year_end *pa = &s02;
  pa->year = 1999;
  antarctica_year_end trio[3];    // array of 3 structures
  trio[0].year = 2003;
  cout << trio->year << endl;

  const antarctica_year_end * arp[3] = {&s01, &s02, &s03};
  cout << arp[1]->year << endl;

  const antarctica_year_end ** ppa = arp;
  auto ppb = arp; // c++11 automatic type deduction
  cout << (*ppa)->year << endl;
  cout << (*(ppb+1))->year << endl;

  return 0;
}
