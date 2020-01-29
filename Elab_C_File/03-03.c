#include <stdio.h>
#include <stdlib.h>
int main(){
    int i  , max, a, b, c, first, sec, gcd;
    char a_str[20],b_str[20];
    fgets(a_str,20,stdin);
    fgets(b_str,20,stdin);
    first = atoi(a_str);
    sec = atoi(b_str);
    //printf("first = %d\nsec = %d  before\n",first,sec);
    a = first;
    b = sec;
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
    first = first / gcd;
    sec = sec / gcd;
    //printf("first = %d\nsec = %d\n",first,sec);
    if (sec==1){
    printf("= %d\n",first);
    }
    else{
        printf("= %d/%d\n",first,sec);
    }
}