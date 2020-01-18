#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int i = 0 , j = 0, k = 0;
int triple(int num){
    for (i = 0; i < num; i++){
        for(j = 0; j < num/2; j++){
            for(k = 0; k < num/2; k++){
                //printf("i = %d, j = %d, k= %d\n",i,j,k);
                if (pow(i,2)+pow(j,2) == pow(k,2) && 
                    i != 0 && j != 0 && k != 0 && i+j+k == num){
                    //printf("******** i = %d, j = %d, k= %d\n",i,j,k);
                    return 1;
                }
            }
        }

    }
}
int main(){
    int num;
    scanf("%d", &num);
    triple(num);
    if (i == j && j == k && i == k){
        printf("No triple found.\n");
    }else{
        printf("(%d, %d, %d)\n",i,j,k);
    }
}