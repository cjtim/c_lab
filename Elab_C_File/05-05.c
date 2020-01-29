#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for (int i = 1; i <= n;i++){
        for(int j = 1; j <= i; j++){
            if (j % 2 != 0){
                printf("-");
            }
            else{
                printf("x");
            }
        }
        printf("\n");
    }
    // printf("last\n");
    for (int i = n ; i > 1;i--){
        // printf("i = %d",i);
        for(int j = 1 ; j < i ; j++){
            if (j % 2 != 0){
                printf("-");
            }
            else{
                printf("x");
            }
        }
        printf("\n");
    }
}
