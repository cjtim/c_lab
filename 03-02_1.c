#include <stdio.h>
#include <stdlib.h>
int main()
{
    int gcd, lcm, remainder, numerator, denominator;
    char num1_str[10],num2_str[90000];
    gets(num1_str);
    gets(num2_str);
    int num1 = atoll(num1_str);
    long long num2 = atoll(num2_str);
    
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;

    // lcm
    lcm = num1 * num2 / gcd;
    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);
}