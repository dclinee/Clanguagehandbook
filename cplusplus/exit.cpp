// exit.cpp -- using exit(0) to exit
#include <iostream>
using namespace std;
class Test{
public:
  Test(){
    cout << "Inside Test's Constructor.\n";
}
  ~Test(){
    cout << "Inside Test's Destructor.";
}
};

int main()
{
  Test t1;
  exit(0); // using exit(0) exit from main()
}
