// enum.cpp -- emumeration type
#include <iostream>
using namespace std;

int main()
{
  enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
  spectrum band; // band a variable of type enumerator
  band = blue;                 // valid, blue is an enumerator
  //++band;  no match for 'operator++'
  cout << "band = " << band << endl;
  cout << "band = " << spectrum(200000000) << endl;
  // band = orange + red;
  //cout << "orange + red = " << band << endl;
  #if 0
  band = 2000;
  cout << band << endl;
  #endif
  cout << red << endl;
  cout << orange << endl;
  cout << yellow << endl;
  cout << green << endl;
  cout << blue << endl;
  cout << violet << endl;
  cout << indigo << endl;
  cout << ultraviolet << endl;

  enum bits{one = 1, two = 2, four = 4, eight = 8};
  enum bigstep{first, second = 100, third};
  //enum{zero, null = 0, one, numer0_uno = 1};

  bits myflag;
  myflag = bits(6);
  cout << "myflag = " << myflag << endl;
  myflag = bits(16);
  cout << "myflag = " << myflag << endl;
  return 0;
}
