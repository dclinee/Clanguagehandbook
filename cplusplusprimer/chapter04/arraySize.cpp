// arraySize.cpp -- testing variable to be size of array
#include <iostream>
using namespace std;

int main()
{
  // typeName arrayName[arraySize]
  int arraySize;
  cout << "Enter a number to be size of array: ";
  cin >> arraySize;
  int array[arraySize];
  for(int i = 0; i < arraySize; i ++)
    {
      array[i] = i + 100;
      cout << "array[i] = " << array[i] << endl;
    }

#if 0
  for(int i = 0; i < arraySize; i ++)
    {
      cout << "array[i] = " << array[i] << endl;
    }
#endif

  return 0;
}
