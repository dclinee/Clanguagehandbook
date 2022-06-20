// chartype.cpp -- the char type
#include <iostream>
using namespace std;

int main()
{
  char ch; // declare a char variable

  cout << "Enter a character: " << endl;
  cin >> ch;
  cout << "Hola! ";
  cout << "Thank you for the " << ch << " character." << endl;
  //output the value of ch character in decimal
  printf("%d\n", ch);
  return 0;
}
