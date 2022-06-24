// exer_2.7.5.cpp -- converst celsius to fahrenheit

#include <iostream>
using namespace std;
int convert(int); // function prototype
int main()
{

  int celsius;
  cout << "Please enter a Celsius value: ";
  cin >> celsius;
  int fahrenheit = convert(celsius);
  cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit.\n";
  return 0;
}

int convert(int temp)
{
  return 1.8 * temp + 32.0;
}
