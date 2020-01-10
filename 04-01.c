#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,n;
    char x_str[20];
    fgets(x_str, 20, stdin);
    x = atoi(x_str);
    printf("Binary number of %d is ",x);
    n = x >> 3;
    printf("%d",n);
    n = x >> 2;
    printf("%d",n&1);
    n = x >> 1;
    printf("%d",n&1 );
    n = x & 0001;
    printf("%d.",n);
    
}