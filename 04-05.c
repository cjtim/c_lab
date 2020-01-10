#include <stdio.h>
#include <stdlib.h>
int main(){
    char num_str[20];
    fgets(num_str,20,stdin);
    int num = atoi(num_str);
    if (num < 0 || num > 26){
        printf("-");
    }
    else{
        for (int i = 1; i < (2*num-1); i++){

        }
    }
}