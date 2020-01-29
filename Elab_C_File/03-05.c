#include <stdio.h>
#include <stdlib.h>
int main(){
    char n_str[10];
    fgets(n_str, 10, stdin);
    int n = atoi(n_str);
    int i, code = 96+n;
    if (n <= 0 || n > 26){
        printf("-");
    }
    else{
        for (i = 0; i < (2*n-1); i++){
            if (i != 2*n-1 && i != 0){
                printf("-");
            }
            printf("%c",code);
            if (i < n-1){
                code--;
            }
            else{
                code++;
            }
        } 
    }
}