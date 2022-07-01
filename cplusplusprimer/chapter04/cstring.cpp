// cstring.cpp -- string copy and sring and concatenate
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char charr1[20];
  char charr2[20] = "dclinee";

  strcpy(charr1, charr2);
  cout << charr1 << endl;
  strcat(charr1, charr2);
  cout << charr1 << endl;

  return 0;
}
