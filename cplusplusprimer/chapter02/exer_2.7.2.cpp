// exer_2.7.2.cpp -- converts units program
#include <iostream>
using namespace std;
int convert(int); // function prototype

int main()
{
  int num;
  cout << "Enter the num: " << endl;
  cin >> num;
  int yards = convert(num);
  cout << num << " long ";
  cout << yards << " yards.\n";

  return 0;
}

int convert(int n)
{
  return 220 * n;
}
