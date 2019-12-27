#include <stdio.h>
#include <stdlib.h>
int main(){
     printf("Enter length of side A: ");
     char a_str[3],b_str[3],c_str[3];
     gets(a_str);
     
     // printf("%d\n",a);
     printf("Enter length of side B: ");
     gets(b_str);
     printf("Enter length of side C: ");
     gets(c_str);

     int a = atoi(a_str);
     int b = atoi(b_str);
     int c = atoi(c_str);
     if ((a <= 0 | b <= 0 | c <= 0) | (a+b <= c | b+c <= a | a+c <= b)){
          printf("Triangle type is invalid.");
     }
     else if (a==b & b == c & a == c){ //สามเหลี่ยมด้านเท่า (equilateral) ทั้งสามด้านเท่ากัน
          printf("Triangle type is equilateral.\n");
     }
     else if (a == b | b == c | a == c )
     {
          printf("Triangle type is isosceles.\n");
     }
     else if (a != b & b != c & a != c){
          printf("Triangle type is scalene.\n");
     }
}