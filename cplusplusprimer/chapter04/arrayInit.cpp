// arrayInit.cpp -- Initialize array with pointer
#include <iostream>
using namespace std;

int main()
{
  // typeName arrayName[arraySize]
  int arraySize;
  cout << "Enter a number to be size of array: ";
  cin >> arraySize;
  int array[arraySize];
  int *ptr = array;
  for(int i = 0; i < arraySize; i++)
    {
      *(ptr + i) = i + 100;
      //array[i] = i + 100;
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
