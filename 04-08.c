#include <stdio.h> 
#include <stdlib.h>
// Decimal to binary conversion 
// using recursion 

long int find(int decimal_number) 
{ 
    if (decimal_number <= 0)  
        return 0;  
    else
        return (decimal_number % 2 + (10 * find(decimal_number / 2))); 
} 
// Driver code  
int main() 
{ 
    char num_str[20];
    fgets(num_str, 20, stdin);
    long int decimal_number = atol(num_str);
    printf("%ld", find(decimal_number)); 
    printf("\n");
    return 0; 
} 
