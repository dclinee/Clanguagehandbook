// c_style_string.cpp -- explain details of C style strings
#include <iostream>
using namespace std;
void dog(void);
void cat(void);
void bird(void);
void fish(void);
void boss(void);
void string_constant(void);

int main()
{
  dog();
  cat();
  bird();
  fish();
  boss();
  string_constant();

  return 0;
}
void dog(void)
{
  char dog[8] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'};
  for(int i = 0; i < 8; i ++)
    {
      cout << "dog[" << i << "] = " << dog[i] << endl;
      //cout << "&dog[" << i << "] = " << &dog[i] << endl;
    }
  cout << "The dog array include null character, but not end of array" << endl;
  cout << "So, dog[8] is not a string.\n";
}

void cat(void)
{
  char cat[8] = { 'f', 'a', 't', 'e', 's', 's', 'a', '\0'};
  for(int i = 0; i < 8; i ++)
    {
      cout << "cat[" << i << "] = " << cat[i] << endl;
      //cout << "&cat[" << i << "] = " << &cat[i] << endl;
    }
  cout << "The cat array end of null character, so cat[8] is a string.\n";
}

void bird(void)
{
  char bird[11] = "Mr. Cheeps";
  for(int i = 0; i < 11; i ++)
    {
      cout << "bird[" << i << "] = " << bird[i] << endl;
    }
  cout << "The end of bird array is appended null charachter by compiler.\n";

}

void fish(void)
{
  char fish[] = "Bubbles"; // let the compiler count
  for(int i = 0; i < sizeof(fish) / sizeof(char); i ++)
    {
      cout << "fish[" << i << "] = " << fish[i] << endl;
    }
  cout << "The end of fish array is appended null charachter by compiler.\n";
}

void boss(void)
{
  char boss[8] = "Bozo";
  for(int i = 0; i < 8; i ++)
    {
      cout << "boss[" << i << "] = " << boss[i] << endl;
    }
  cout << "The size of boss array is: " << sizeof(boss) << " bytes." << endl;
}

void string_constant(void)
{
  char shirt_size = 'S'; // character constant
  cout << "shirt_size = " << shirt_size << endl;
  char shirt_size_array[] = "S";
  for(int i = 0; i < sizeof(shirt_size_array) / sizeof(char); i ++)
    {
      cout << "shirt_size_array[" << i << "] = " << shirt_size_array[i] << endl;
    }
  cout << "The size of string_constant array is: " << sizeof(shirt_size_array) << " bytes." << endl;
}
