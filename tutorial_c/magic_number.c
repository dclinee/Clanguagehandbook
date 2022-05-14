/*Magic number in C
 Steps to find the Magic number in C
step 1:Declare an integer type variable and input a number from the user to store it in N.
step 2:Get the sum of all digits of the original number and store it another variable A.
step 3:Reverse the number of variable A and store into B.
step 4:After that, multiply the values of variable A and B and store into C.
step 5:Check whether C == N, then the number is a Magic Number. Else, the Number is not a Magic Number.*/

#include <stdio.h>
//#include <conio.h>

int main()
{
  // declare integer variables
  int n, temp, rev = 0, sum_of_digits = 0;

  printf("Enter a number:\n");
  scanf("%d", &n); //get the number
  printf("The enter number is: %d", n);

  temp = n; // assign the number to themp variable

  // use while loop to calculate the sum of digits
  while(temp > 0)
    {
      // extract digit one by one and store into the sum of digits
      sum_of_digits = sum_of_digits + temp % 10;
      /*use modulus symbol to get the remainder of each iteration by temp % 10*/
      temp = temp / 10;
}
  temp = sum_of_digits; // assign the sum_of_digits to temp variable
  printf("\n The sum of the digits = %d", temp);

  // get the reverse sum_of_digits
  while(temp > 0)
    {
      rev = rev * 10 + temp % 10;
      temp = temp / 10;
}
  printf("\n The reverse of the digits = %d,", rev);


  printf("\n The product of %d * %d = %d\n", sum_of_digits, rev, sum_of_digits * rev);
  // use if else statement to check the magic number
  if(rev * sum_of_digits == n)
    {
      printf("\n %d is a Magic Number.", n);
}
  else
    {
      printf("\n %d is not a Magic Number.", n);
}
  putchar('\n');
  return 0;
}
