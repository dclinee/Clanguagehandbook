// new_struct.cpp -- create dynamic structure with new
#include <iostream>
using namespace std;
struct things
  {
    int good;
    int bad;
  };

int main()
{
  things grubnose = {3, 453};
  things *pt = &grubnose;

  cout << "grubnose.good = " << grubnose.good << endl;
  cout << "grubnose.bad = " << grubnose.bad << endl;

  cout << "pt->good = " << pt->good << endl;
  cout << "pt->bad = " << pt->bad << endl;

  return 0;
}
