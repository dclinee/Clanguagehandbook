/* sum_function.cpp */
#include <iostream>
using namespace std;
auto f = [](int i, int j) { return f(j <= i);};
int main(void)
{
  for(int i = 1; i <= 5; i++)
    {
      for(int j = 1; j <= i; j++)
        {
          cout << f(i, j) ? '*' : ' ';
        }
      cout << endl;
    }
  return 0;
};
