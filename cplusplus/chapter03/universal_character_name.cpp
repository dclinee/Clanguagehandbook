// universal_character_name.cpp -- unicode and ISO 10646
#include <iostream>
using namespace std;

int main()
{
  //int k\u00F6rper;
  // \u with 8 hexadecimal bits
  cout << "Hi, k\u00F6rper\n";
  cout << "Let them eat g\u00E2teau\n";

  // \U with 16 hexadecimal bits
  //cout << "Hi, k\U00F6rper\n";
  //cout << "Let them eat g\U00E2teau\n";

  return 0;
}
