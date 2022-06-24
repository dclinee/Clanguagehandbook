// exer_2.7.7.cpp -- viod function
#include <iostream>
using namespace std;
void display_time(int, int);

int main()
{
  int hours;
  cout << "Enter the number of hours: ";
  cin >> hours;
  int minutes;
  cout << "Enter the number of minutes: ";
  cin >> minutes;
  display_time(hours, minutes);
  return 0;
}

void display_time(int hours, int minutes)
{
  cout <<"Time: " << hours << ":" << minutes << endl;
}
