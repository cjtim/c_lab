#include <stdio.h>
#include <stdlib.h>
int main(){
    char row[20],columm[20];
    fgets(row,20,stdin);
    fgets(columm,20,stdin);
    int x = atoi(row);
    int y = atoi(columm);
    for (int i = 1; i <= y; i++){
        //FIRST LINE
        if (i == 1){
            for (int j = 1; j <= x; j++){
                printf("*");
            }
            printf("\n");
        }
        else if (i == y){
            for (int j = 1; j <= y-1 ; j++){
                printf(" ");
            }
            for (int j = 1; j <= x; j++){
                printf("*");
            }
            printf("\n");
        }
        else if(i > 1 && i < y){
            for (int j = 1; j <= i+x-1; j++){
                if (j == i|j == i+x-2){
                    printf("*");
                }
                printf(" ");
            }
            printf("\n");
        }
    }
}