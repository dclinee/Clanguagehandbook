/* pass array to functon for argument */
#include <stdio.h>
int get_sum(int arr[], int n);
int main(int argc, char *argv[])
{
  int arr[] = {1, 2, 3, 4, 5};
  int sum;
  sum = get_sum(arr, sizeof(arr)/sizeof(int));
  printf("sum = %d\n",sum);
  return 0;
}
int get_sum(int arr[], int n)
{
  int ret = 0;
  //n = sizeof(arr)/sizeof(int);
  for(int i = 0; i < n; i++)
    {
      ret += arr[i];
    }
  return ret;
}
