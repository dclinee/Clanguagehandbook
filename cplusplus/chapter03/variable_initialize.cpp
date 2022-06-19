// variable_initialize.cpp -- initialize variable in CPP
#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int n_int = INT_MAX;
  cout << "n_int = " << n_int << endl;
  int uncles = 5;
  cout << "uncles = " << uncles << endl;
  int aunts = uncles;
  cout << "aunts = " << aunts << endl;
  int chairs = aunts + uncles;
  cout << "chairs = " << chairs << endl;

  int wrens(432);
  cout << "wrens = " << wrens << endl; // C++ syntax, set wrens to 432

  short year; // what could it be?
  /*
   If yo don't initialize a variable that is defined inside a function,
  the variable's value is indeterminate.That means the value is whatever
  happened to be sitting at that memory location prior to the creation
  of the variable.*/
  cout << "year = " << year << endl;
  year = 1492;
  cout << "year = " << year << endl;
  // C++11 initialize way
  int hanburgers = {24};
  cout << "hanburgers = " << hanburgers << endl;
  int emus{7};
  cout << "emus = " << emus << endl;
  int rheas = {12};
  cout << "rheas = " << rheas << endl;
  int rocs = {};
  cout << "rocs = " << rocs << endl;
  int psychics{};
  cout << "psychics = " << psychics << endl;

  return 0;
}
