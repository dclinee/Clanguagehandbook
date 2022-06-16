// exer_2.7.3.cpp -- define your functions
#include <iostream>
using namespace std;
void func_one(void); // function prototype
void func_two(void); // function prototype

int main()
{
  func_one();
  func_one();
  func_two();
  func_two();

  return 0;
}

void func_one(void)
{
  cout << "Three blind mice.\n";
}

void func_two(void)
{
  cout << "See how they run.\n";
}
