// escape_char.cpp -- display escape character
#include <iostream>
using namespace std;

int main()
{
  char alarm = '\007';
  //char alarm = '\a';
  cout << alarm << "Don't do that again!\n";
  return 0;
}
