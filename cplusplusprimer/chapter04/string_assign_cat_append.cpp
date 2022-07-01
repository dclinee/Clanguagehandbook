// string_assign_cat_append.cpp -- string assignment concatenate and append
#include <iostream>
#include <string>
using namespace std;

int main()
{
  char charr1[20]; // create an empty array
  char charr2[20] = "jaguar"; // create an initialized array
  string str1;    // create an empty string
  string str2 = "panther";    // create an initialized string

  //charr1 = charr2;   // Invalid, no array assignment
  //cout << charr1[3] << endl;
  str1 = str2;       // valid, object assignment ok
  cout << str1 << endl;

  string str3;
  str3 = str1 + str2;
  cout << str3 << endl;
  str1 += str2;
  cout << str1 << endl;

  return 0;
}
