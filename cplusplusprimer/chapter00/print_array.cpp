// print_array.cpp -- three ways to print the elements of array
#include <iostream>
using namespace std;
void while_print_array(void);
void for_print_array(void);
void foreach_print_array(void);

int main()
{
  while_print_array();
  for_print_array();
  foreach_print_array();
  return 0;
}

void while_print_array(void)
{
  int arr[7] = {11, 22, 33, 44, 55, 66, 77};
  int i = 0;
  while(i < 7)
    {
      cout << arr[i] << " ";
      i++;
    }
  cout << endl;
  return ;
}


void for_print_array(void)
{
  int arr[7] = {11, 22, 33, 44, 55, 66, 77};
  for(int i = 0; i < 7; i ++)
    {
      cout << arr[i] << " ";
    }
  cout << endl;
  return ;
}

void foreach_print_array(void)
{
  int arr[7] = {11, 22, 33, 44, 55, 66, 77};
  for(int elements: arr)
    {
      cout << elements << " ";
    }
  cout << endl;
  return ;
}
