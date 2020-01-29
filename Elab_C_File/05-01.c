#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    printf("Input n = ");
    long long int n ;
    scanf("%lld",&n);
    int nDigi = floor(log10(n)) + 1;

    printf("n^2 = %lld\n", n*n);
    int mod_len = pow(10,nDigi);
    // printf("mod_len = %d\n",mod_len);
    int last_digi_pow = (n*n) % mod_len;
    int last_digi_n = n % mod_len;
    // printf("%d %d\n",last_digi_pow , last_digi_n);

    if (last_digi_n == last_digi_pow){
        printf("Yes. %lld is automorphic number.",n);
    }
    else{
        printf("No. %lld is not automorphic number.",n);
    }

}