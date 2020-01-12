#include <stdio.h>
#include <stdlib.h>
int main(){
    char num_str[20];
    fgets(num_str, 20, stdin);
    int num = atoi(num_str);
    int for_down = num;
    for (int i = 1; i <= 2*num-1; i++){
        //UP STAR
        if (i <= num){
            for(int j = 1; j <= i; j++){
                printf("*");
            }
        printf("\n");
        }
        // DOWN STAR
        else if (i>num){
            for(int j = 1; j < for_down; j++){
                printf("*"); 
            }
        for_down--;
        printf("\n");
        }
    }
}