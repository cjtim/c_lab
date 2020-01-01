#include <stdio.h>
#include <stdlib.h>
int main(){
    char m_str[10],n_str[10000];
    gets(m_str);
    gets(n_str);
    long long m = atoll(m_str);
    long long n = atoll(n_str);
    int i,gcd,lcm;
    i = 2;
    // GCD
    for (i = 1; i <= m && i <= n; ++i) {
        
        // check if i is a factor of both integers
        if (m % i == 0 && n % i == 0)
            gcd = i;
    }
    lcm = (m * n) / gcd;
    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

}