// modulus.cpp -- uses % opeator to convert lbs to stone
#include <iostream>
using namespace std;

int main()
{
  const int LBS_per_stn = 14;
  int lbs;

  cout << "Enter your weight in pounds: ";
  cin >> lbs;
  int stone = lbs / LBS_per_stn;    // whole stone
  int pounds = lbs % LBS_per_stn;   // remainder in pounds
  cout << lbs << " pounds are " << stone
       << " stone, " << pounds << " pound(s).\n";
  return 0;
}
