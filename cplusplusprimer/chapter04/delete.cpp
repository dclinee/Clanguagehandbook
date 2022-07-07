// delete.cpp -- free memory with delete when done
#include <iostream>
using namespace std;

int main()
{
  int *ps = new int;             // ok
  delete ps;                     // ok
  delete ps;                     // not ok now
  int jugs = 5;                  // ok
  int *pi = &jugs;               // ok
  delete pi;              // not allowed , memory not allocated by new

  int *pq = ps;           // set second pointer to same block
  delete pq;              // delete with second pointer

  return 0;
}
