// scope.c
#include <stdio.h>
double file_socpe = 0.0; // global variable or file socpe variable
double blocky(double cleo); //function prototype scope
void test(void);
int main(void)
{
  double sum = blocky(1.0);
  printf("sum = %lf\n", sum);

  // main() can use the global variable file_socpe

  printf("file_socpe = %lf\n", file_socpe);

  // test() can use the global variable file_socpe

  test();

  return 0;
}

double blockx(double cleo /*cleo belong function body block*/)
{
  double patrick = 0;
  for (int i = 0; i < 10; i++)
    {
      double q = cleo * i;   // socpe of q start
      patrick *= q;          // socpe of q end
    }
  return patrick;
}

void test(void)
{
  printf("file_socpe = %lf\n", file_socpe);
}
