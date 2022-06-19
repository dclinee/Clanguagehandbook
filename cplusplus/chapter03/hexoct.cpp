// hexoct.cpp -- shows hex and octal literals
#include <iostream>
int main()
{
  using namespace std;
  int chest = 42; // decimal integer literal
  int waist = 0x42; // hexadecimal integer literal
  int inseam = 042; // octal integer literal

  cout << "Monsieur cuts a striking figure!\n";
  cout << "cheat = " << chest << " (42 in decimal)\n";
  cout << "waist = " << waist << " (0x42 in hexadecimal)\n";
  cout << "inseam = " << inseam << " (042 in octal)\n";

  return 0;
}
