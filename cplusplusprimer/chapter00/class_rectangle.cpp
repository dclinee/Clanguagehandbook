// class-rectangle.cpp
#include <iostream>
using namespace std;

class Rectangle
{
public:
  double height;
  double width;

  double area(double, double)
  {
    return height * width;
  }
  double perimeter(double, double)
  {
    return ( height + width ) * 2;
  }
};

int main(void)
{
  Rectangle rectangle;

  double area = rectangle.area(2.3, 3.3);
  double perimeter = rectangle.perimeter(2.2, 3.3);
  cout << "Area =  " << area << endl;
  cout << "Perimeter =  " << perimeter << endl;

  return 0;
}
