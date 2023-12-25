#include <iostream>
using namespace std;

void cheers (int n);

int main(void)
{
  cheers(100);
  return 0;
}

void cheers (int n)
{
  for (int i = 0; i < n; i++)
    {
      cout << "Cheers!\n";
    }
  cout << endl;
}
