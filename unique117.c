/* C Program to Find NCR Factorial of a Number */
#include <stdio.h>
 
int Cal_Fact(int);  
 
int main()
{
  int n, r, ncr; 
 
  printf("\n Please Enter the Values for N and R: \n");
  scanf("%d %d", &n, &r);
  
  ncr = Cal_Fact(n) / (Cal_Fact(r) * Cal_Fact(n-r));
  printf("\n NCR Factorial of %d and %d = %d", n, r, ncr);
 
  return 0;
}
 
int Cal_Fact(int Number)
{ 
  int i; 
  int Factorial = 1;
 
  for (i = 1; i <= Number; i++)
   {
     Factorial = Factorial * i;
   }
  return Factorial;
}