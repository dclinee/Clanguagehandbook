// summarizing_pointer_points.cpp
#include <iostream>
using namespace std;

int main()
{
  // declaring pointer
  double *pn;
  char *pc;
  // assigning values to pointers
  double *pa;
  double bubble = 3.2;
  pn = &bubble;
  pc = new char;
  pa = new double [30];
  // dereferencing pointers
  cout << *pn;
  *pc = 'S';
  // distinguishing between a pointer and the pointed-to value
  int *pt = new int;
  *pt = 5;
  // array name
  int tacos[10];     // now tacos is the same as &tacos[0]
  // pointer arithmetic
  int ptr[10] = {5, 2, 8, 4, 1, 2, 2, 4, 6, 8};
  int *pt = ptr;
  pt = pt + 1;
  int *pe = &ptr[9];
  pe = pe - 1;
  int diff = pe - pt;
  // dynamic binding and static binding for arrays
  int size;
  cin >> size;
  int *pz = new int [size];
  delete [] pz;
  // array notation and pointer noation
  int *pt = new int [10];
  *pt = 5;
  pt[0] = 6;
  pt[9] = 44;
  int coats[10];
  *(coats + 4) = 12;
  return 0;
}
