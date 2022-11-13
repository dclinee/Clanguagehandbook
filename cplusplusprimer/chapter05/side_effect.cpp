// side_effect.cpp
#include <iostream>
using namespace std;
void test_one(void);
void test_two(void);
void test_three(void);
int main()
{
  cout << "***** test_one *****" << endl;
  test_one();
  cout << "***** test_two *****" << endl;
  test_two();
  cout << "***** test_three *****" << endl;
  test_three();

  return 0;
}

void test_one(void)
{
  int a = 0;
  cout << "a = " << a << endl;
  if(a++) {cout << "True." << endl;}
  else {cout << "False." << endl;}
  cout << "a = " << a << endl;
}
void test_two(void)
{
  int a = 0;
  cout << "a = " << a << endl;
  if(++a) {cout << "True." << endl;}
  else {cout << "False." << endl;}
  cout << "a = " << a << endl;
}
void test_three(void)
{
  int a = 0;
  int b = 1;
  if(a==b) {cout << "True." << endl;}
  else {cout << "False." << endl;}
}
