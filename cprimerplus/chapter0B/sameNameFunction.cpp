// sameNameFunction.cpp
#include <iostream>
using namespace std;
void my_print(void)
{
  printf("This is one function.\n");
}

// the smae name function can be premised in C language
// error will generate when compile the program: conflicting types for 'my_print'
void my_print(int a, int b)
{
  printf("%d, %d\n", a, b);
  printf("This anther function.\n");
}
int main(void)
{
  my_print();
  my_print(1, 2);
  return 0;
}
