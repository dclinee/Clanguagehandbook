// sizeof.cpp
#include <iostream>
using namespace std;
int func_test_sizeof(void); //function prototype
int mian()
{

  cout << "The sizeof(func_test_sizeof) = " << sizeof(func_test_sizeof) << endl;
  /* error: ISO C++ forbids applying 'sizeof' to an expression of function
   type [-fpermissive]*/
  return 0;
}
