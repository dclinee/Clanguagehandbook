// struct_string_4.4.3.cpp -- object of string as for member of struct
#include <iostream>
#include <string>
using namespace std;

int main()
{
  struct inflatable
  {
    std::string name;
    float volume;
    double price;
  };

  inflatable duck {"Daphne", 0.12, 9.98};

  cout << "duck.name = " << duck.name << endl;
  cout << "duck.volume = " << duck.volume << endl;
  cout << "duck.price = " << duck.price << endl;

  inflatable mayor {};

  cout << "mayor.name = " << mayor.name << endl;
  cout << "mayor.volume = " << mayor.volume << endl;
  cout << "mayor.price = " << mayor.price << endl;

  return 0;
}
