// order_evaluction.cpp
#include <iostream>
#include <cstdio>
using namespace std;
int a() {return puts("a");}
int b() {return puts("b");}
int c() {return puts("c");}
void z(int, int, int) {}
int main()
{
  z(a(), b(), c());
  return a() + b() + c();
}
