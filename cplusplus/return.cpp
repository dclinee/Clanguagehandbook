// return.cpp -- using return 0 to exit
#include <iostream>
using namespace std;
class Test{
public:
  Test(){
    cout << "Inside Test's Constructor.\n";
}
  ~Test(){
    cout << "Inside Test's Destructor.\n";
}
};

int main()
{
  Test t1;
  return 0; // using return 0 exit from main()
}
