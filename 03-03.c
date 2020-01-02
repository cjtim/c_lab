#include <stdio.h>
#include <stdlib.h>
int main(){
    int i , max, a, b;
    char a_str[20],b_str[20];
    fgets(a_str,20,stdin);
    fgets(b_str,20,stdin);
    a = atoi(a_str);
    b = atoi(b_str);

    if (a > b){
        i = a;
    }
    else if (b < a){
        i = b;
    }
    else if ( a == b){
        i = a;
    }
    while (i >= 1 ){
        if(a % i != 0 | b % i != 0){
            i--;
            //printf("plus i++ \n");
        }
        while (a % i == 0 && b % i == 0){
            a = a / i;
            b = b / i;
            i--;
            //printf("a = %d\nb = %d \n",a,b);
        }
        
    }
    if (b==1){
        printf("= %d",a);
    }
    else{
        printf("= %d/%d\n",a,b);
    }
}