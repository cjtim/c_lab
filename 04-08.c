#include <stdio.h> 
#include <stdlib.h>
int find(int decimal_number) 
{ 
    if (decimal_number <= 0)  
        return 0;  
    else
        return (decimal_number % 2 + (10 * find(decimal_number / 2))); 
} 
int main() 
{ 
    char num_str[20];
    fgets(num_str, 20, stdin);
    int decimal_number = atoi(num_str);
    printf("%d", find(decimal_number)); 
    printf("\n");
    return 0; 
} 
