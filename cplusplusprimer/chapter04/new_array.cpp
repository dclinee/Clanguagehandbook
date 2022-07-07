// new_array.cpp -- create array with new
#include <iostream>
using namespace std;

int main()
{
  // type_name * pointer_name = new type_name [num_elements]
  int *psome = new int [10];     // get a block of 10 ints
  delete [] psome;
  /*
   Don't use delete to free memory that new didn't allocte.
  Don't use delete to free the smae block of memory twice in successsion.
  Use delete [] if you used new [] to allocate an array.
  Use delete (no brackets) if you used new to allocate a single entity.
  It's safe to apply delete to the null pointer(nothing happens).*/
  return 0;
}
