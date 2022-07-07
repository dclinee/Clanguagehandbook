// union_struct.cpp -- structure of union and other data type
#include <iostream>
using namespace std;

int main()
{
  struct widget
  {
    char brand[20];
    int  type;
    union id     // format depends on widget type
    {
      long id_num; // type 1 widgets
      char id_char[20]; // other widgets
    }id_val;
  };

  widget prize =
    {
      "Dclinee",
      12,
       {
        1224142,
      }
    };

  return 0;
}
