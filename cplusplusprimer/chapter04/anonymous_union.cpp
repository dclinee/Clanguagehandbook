// anonymous_union.cpp -- anonymous union
#include <iostream>
using namespace std;

int main()
{
struct widget
{
  char brand[20];
  int type;
  union                      // anonymous union
  {
    long id_num;             // type 1 widgets
    char id_char[20];        // other widgets
  };
};

 widget prize;
 if(prize.type == 1)
   cin >>  prize.id_num;
 else
   cin >> prize.id_char;
  return 0;
}
