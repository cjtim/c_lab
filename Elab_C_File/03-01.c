#include <stdio.h>
#include <stdlib.h>
int main(){
    char num_str[3];
    gets(num_str);
    int num = atoi(num_str);
    if (num >= 0){
        int i = -1;
        while (i < num){
        printf("%d\n",num);
        num-- ;
        }
    }
    
    
}