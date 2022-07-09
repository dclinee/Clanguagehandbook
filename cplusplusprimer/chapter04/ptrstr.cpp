// ptrstr.cpp -- using pointers to strings
#include <iostream>
#include <cstring>                  // declare strlen() strcpy()
using namespace std;

int main()
{
  char animal[20] = "bear";         // aniaml holds bear
  const char *bird = "wren";        // bird holds address of string
  char *ps;                         // uninitialized

  cout << animal << " and ";        // display bear
  cout << bird << "\n";             // display wren

  //cout << ps << "\n";   // may display gargage, may cause a crash

  cout << "Enter a kind of animal: ";
  cin >> animal;
  ps = animal;
  cout << ps << "!\n";
  cout << "Before using strcpy():\n";
  cout << animal << " at " << (int *)animal << endl;
  cout << ps << " at " << (int *)ps << endl;

  ps = new char[strlen(animal) + 1];
  strcpy(ps, animal);
  cout << "After using strcpy():\n";
  cout << animal << " at " << (int *)animal << endl;
  cout << ps << " at " << (int *)ps << endl;
  delete [] ps;

  return 0;
}
