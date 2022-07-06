// struct_create_variables.cpp -- many ways to create variables of sturcture
#include <iostream>
using namespace std;

int main()
{
  struct perks
  {
    int key_number;
    char car[12];
  } ms_jones =
    {
      8,
      "somedata",
}; // two perks variables

   perks mr_smith =
    {
      7,
      "Packard",
    };

   cout << "mr_smith.key_number = " << mr_smith.key_number << endl;
   cout << "mr_smith.car = " << mr_smith.car << endl;
   cout << "ms_jones.key_number " << ms_jones.key_number << endl;
   cout << "ms_jones.car = " << ms_jones.car << endl;

  return 0;
}
