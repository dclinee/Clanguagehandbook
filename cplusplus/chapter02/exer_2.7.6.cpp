// exer_2.7.6.cpp -- converst  program with function

#include <iostream>
using namespace std;
double convert(double); // function prototype
int main()
{

  double light_years;
  cout << "Please enter the number of light years: ";
  cin >> light_years;
  double astronomical_units = convert(light_years);
  cout << light_years << " light years = " << astronomical_units << " astronomical units.\n";
  return 0;
}

double convert(double temp)
{
  return 63240 * temp;
}
