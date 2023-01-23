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
// Array 0f structure
/*
 We can also declare an array of structure variables. in which each
element of the array.*/
struct Employee{
  char ename[10];
  int sal;
};
struct Employee emp[5];
int i, j;
void ask(void)
{
  for (i = 0; i < 3; i++)
    {
    printf("\nEnter %dst Employee record:\n", i + 1);
    printf("\nEmployee name:\t");
    scanf("%s", emp[i].ename);
    printf("\nEnter Salary:\t");
    scanf("%d", &emp[i].sal);
  }
  printf("\nDisplaying Emploee record:\n");
  for (i = 0; i < 3; i++)
    {
      printf("\nEmployee name is %s", emp[i].ename);
      printf("\nSalary is %d", emp[i].sal);
}
}

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

  ask();

  return 0;
}
