#include <stdio.h>
struct employee
{
  char name[100];
  int age;
  float salary;
  char department[100];
};

int main(void)
{
  struct employee employee_one, *ptr;
  printf("Enter Name, Age, Salary, Department of Employee\n");
  scanf("%s %d %f %s", employee_one.name, &employee_one.age,
        &employee_one.salary, employee_one.department);
  /*Printing structure members using the doc optertor.*/
  printf("Name: %s\nAge: %d\nSalary: %f\nDepartment: %s\n\n",
         employee_one.name, employee_one.age, employee_one.salary,
         employee_one.department);

  /*Printing structure members using the arrow optertor.*/
  ptr = &employee_one;
  printf("Name: %s\nAge: %d\nSalary: %f\nDepartment: %s\n",
         ptr->name, ptr->age, ptr->salary, ptr->department);

  return 0;
}
