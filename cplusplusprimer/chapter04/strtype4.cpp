// strtype4.cpp -- line input
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
  char charr[20];
  string str;

  cout << "Length of string in charr before input: "
       << strlen(charr) << endl;
  cout << "Length of string in str before input: "
       << str.size() << endl;
  cout << "Enter a line of text:\n";
  cin.getline(charr, 20);
  cout << "Your entered: " << charr << endl;
  cout << "Enter another line of text:\n";
  getline(cin, str);
  cout << "Your entered: " << str << endl;
  cout << "Length of string in charr after input: "
       << strlen(charr) << endl;
  cout << "Length of string in str after input: "
       << str.size() << endl;

  return 0;
}
