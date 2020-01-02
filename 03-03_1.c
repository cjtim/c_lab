#include <stdio.h>
 
 
int gcd(int a, int b);
 
int main(void)
 
{
 
   int num, den;
 
   printf("Please enter two integers:  ");
   scanf("%d%d\n", &num, &den);
 
    
 
   printf("Simplified fraction:  ");
 
   return 0;
 
}
 
 
int gcd(int a, int b)
 
{
    
   int rem;
 
   if((rem = a % b) == 0) {
      return b;
   }
   else {
      return gcd(b, rem);
   }
 
}