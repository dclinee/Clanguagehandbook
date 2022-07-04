// raw.cpp -- raw string
#include <iostream>
using namespace std;

int main()
{
  cout << R"(Jim "king" Tutt uses "\n" instead of endl.)" << "\n";
  cout << "Jim \"King\" Tutt uses \"\\n\" instead of endl." << "\n";
  cout << R"+*("(who would't?)", she whispered.)+*" << endl;
  return 0;
}
