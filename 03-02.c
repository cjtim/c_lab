#include <stdio.h>
#include <stdlib.h>
int main(){
    char m_str[20],n_str[20];
    fgets(m_str,20,stdin);
    fgets(n_str,20,stdin);
    long long m = atoll(m_str);
    long long n = atoll(n_str);
    int i,gcd,a,b,c;
    long long int lcm;
    if (m > n){
        b = m;
        a = n;
    }
    else{
    a = m;
    b = n;
    }
    
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
    printf("GCD: %lld\n", gcd);
    printf("LCM: %lld\n", lcm);
}