// assgn_st.cpp -- assigning structures
#include <iostream>
using namespace std;

struct inflatable
{
  char name[20];
  float volume;
  double price;
};

int main()
{
  inflatable bouquet =
    {
      "sumflowers",
      0.20,
      12.49
    };
  inflatable choice;
  cout << "bouquet: " << bouquet.name << " for $";
  cout << bouquet.price << endl;

  choice = bouquet;   // assign one sturcture to another
  cout << "choice: " << choice.name << " for $";
  cout << choice.price << endl;


  return 0;
}
