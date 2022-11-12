// static.cpp -- using exit(0) to exit
/*Difference between exit(0) and return 0 in C++.
 When exit(0) is used to exit from program, destructor for locally
scope not-static objects are not called.
But destructor are called if return 0 is used.*/
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
  static Test t1; // note that t1 is static
  exit(0);
}
