// combination_assignment.cpp
#include <iostream>
using namespace std;
int main()
{
  int k = 5;
  k += 3;
  cout << "k = " << k << endl;

  int *pa = new int[10];
  pa[4] = 12;
  pa[4] += 6;
  cout << "pa[4] = " << pa[4] << endl;
  *(pa + 4) += 7;
  cout << "pa[4] = " << pa[4] << endl;
  pa[2] = 12;
  pa += 2;
  cout << "pa[2] = " << pa[2] << endl;


  return 0;
}
