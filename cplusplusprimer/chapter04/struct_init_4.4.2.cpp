// struct_init_4.4.2.cpp -- list initialized
#include <iostream>
using namespace std;

int main()
{
  struct inflatable  // structure definition
  {
    char name[20];
    float volume;
    double price;
};
  inflatable duck {"Daphne", 0.12, 9.98};

  cout << "duck.name = " << duck.name << endl;
  cout << "duck.volume = " << duck.volume << endl;
  cout << "duck.price = " << duck.price << endl;

  return 0;
}
