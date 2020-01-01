#include <stdio.h>
#include <stdlib.h>
int main(){
    char a_str[40],b_str[40];
    fgets(a_str,40,stdin);
    fgets(b_str,40,stdin);
    int a = atoi(a_str);
    int b = atoi(b_str);
    int i = 0;
    while(1){
        if ( (a % i == 0) & (b % i == 0)){
            a = a / i;
            b = b / i;
        }
        else{
            i += 1;
        }
    }
    printf("a = %d\nb = %d",a,b);

}