// pointer.cpp -- our first pointer variable
#include <iostream>
using namespace std;

int main()
{
  int updates = 6;          // declare a int variable
  int *p_updates;           // declare pointer to an int
  p_updates = &updates;     // assign address of int to pointer

  // express values two ways
  cout << "values: updates = " << updates;
  cout << ", *p_updates = " << *p_updates << endl;

  // express address two ways
  cout << "Address: &updates = " << &updates;
  cout << ", p_updates = " << p_updates << endl;

  // use pointer to change value
  *p_updates = *p_updates + 1;
  cout << "Now updates = " << updates << endl;

  return 0;
}
