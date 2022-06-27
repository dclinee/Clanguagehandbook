// init_array.cpp -- initialize of array
#include <iostream>
using namespace std;
static void array1(void);
static void array2(void);
static void array3(void);


int main()
{
  array1();
  array2();
  array3();

  return 0;
}
static void
array3(void)
{
  int array[3] {1};
  for (int i = 0; i < 3; i ++)
    {
      cout << "array[" << i << "] = " << array[i] << endl;
    }
  cout << endl;

  for (int i = 0; i <= 3; i ++)
    {
      cout << "array[" << i << "] = " << array[i] << endl;
      if(i >= sizeof(array) / sizeof(int))
        {
          cout << "The element of array[" << i << "] = " << array[i] << " beyond the array size.\n";
        }
    }
}
static void
array2(void)
{
  int array[3] = {1};
  for (int i = 0; i < 3; i ++)
    {
      cout << "array[" << i << "] = " << array[i] << endl;
    }
  cout << endl;

  for (int i = 0; i <= 3; i ++)
    {
      cout << "array[" << i << "] = " << array[i] << endl;
      if(i >= sizeof(array) / sizeof(int))
        {
          cout << "The element of array[" << i << "] = " << array[i] << " beyond the array size.\n";
        }
    }

}
static void
array1(void)
{
  int array[3] = {};
  for (int i = 0; i < 3; i ++)
    {
      cout << "array[" << i << "] = " << array[i] << endl;
    }
  cout << endl;

  for (int i = 0; i <= 3; i ++)
    {
      cout << "array[" << i << "] = " << array[i] << endl;
      if(i >= sizeof(array) / sizeof(int))
        {
          cout << "The element of array[" << i << "] = " << array[i] << " beyond the array size.\n";
        }
    }

}
