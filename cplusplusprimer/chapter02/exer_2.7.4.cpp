// exer_2.7.4.cpp -- display months of your age
#include <iostream>
using namespace std;

int main()
{
  int age;
  cout << "Enter your age: ";
  cin >> age;
  int months;
  months = 12 * age;
  cout << "Your age have " << months << " months" << endl;

  return 0;
}
