#include <stdio.h>
#include <stdlib.h>
int main(){
    char m_str[10],n_str[10000];
    gets(m_str);
    gets(n_str);
    long long m = atoll(m_str);
    long long n = atoll(n_str);
    int i,gcd,a,b,c;
    long long int lcm;
    a = m;
    b = n;
    
    //Calculate GCD
    c = a % b;
    while(c > 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    gcd = b;
    // END OF GCD
    lcm = (m * n) / gcd;
    printf("GCD: %d\n", gcd);
    printf("LCM: %lld\n", lcm);

}