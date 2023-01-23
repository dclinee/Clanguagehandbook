// the tutorial of C structure
/*
  In C programming, a C structure is a collection of variables that
  under a singe name.
 */
#include <iostream>
using namespace std;
struct person {
  char name[100];
  int age;
  float salary;
};

int main(void)
{
  struct person dclinee = {"dclinee", 18, 30000.0};
  cout << "dclinee.name = " << dclinee.name << endl;
  cout << "dclinee.age = " << dclinee.age << endl;
  cout << "dclinee.salary = " << dclinee.salary << endl;

  return 0;
}
