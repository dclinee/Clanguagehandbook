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
  // Create Structure variables
  struct person dclinee = {"dclinee", 18, 30000.0};
  struct person *ptr = &dclinee;

  //Access member of a structure with . member operator
  cout << "dclinee.name = " << dclinee.name << endl;
  cout << "dclinee.age = " << dclinee.age << endl;
  cout << "dclinee.salary = " << dclinee.salary << endl;
  cout << "********************************************" << "\n";
  //Access member of a structure with -> structure pointer operator
  cout << "dclinee.name = " << ptr->name << endl;
  cout << "dclinee.age = " << ptr->age << endl;
  cout << "dclinee.salary = " << ptr->salary << endl;

  return 0;
}
