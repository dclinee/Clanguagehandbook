// delete4.22.cpp -- using the delete operator
#include <iostream>
#include <cstring>
using namespace std;
char *getname(void);           // function prototype

int main()
{
  char *name;                 // create pointer but no storage

  name = getname();           // assign address of string to name
  cout << name << " at " << (int *) name << "\n";
  delete [] name;

  name = getname();
  cout << name << " at " << (int *) name << "\n";
  delete [] name;
  return 0;
}

char *getname()
{
  char temp[80];          // temporarey storage
  cout << "Enter last name: ";
  cin >> temp;
  char *pn = new char[strlen(temp) + 1];
  strcpy(pn, temp);

  return pn;
}
