#include <stdio.h>
#include <stdlib.h>
int main(){
    char num_str[20];
    fgets(num_str,20,stdin);
    int num = atoi(num_str);
    if (num <= 0 || num > 26){
        printf("-");
    }
    else{
        //i แถว
        for (int i = -(num-1); i <= num-1; i++){
            // j หลัก
            for (int j = -2*(num-1); j <= 2*(num-1); j += 1){
                if (j % 2 == 0 && (abs(j/2)+abs(i))<num){
                    printf("%c",abs(j/2)+abs(i)+'a');
                }
                else{
                    printf("-");}
                
                
            }
            printf("\n");
       
 
        }
    }
}