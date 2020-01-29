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
        //i แถว
        for (int i = 1; i <= (2*num-1); i++){
            // j หลัก
            int code = 96+num;
            int code_after = code;
            for (int j = 1; j <= (2*num-1); j += 1){
                if(j <= (2*num)-2*j){
                    printf("-");
                }
                else if(j > (2*num)-2*j){
                    printf("*");
                }
                
            }
            printf("\n");

        }
    }
}
//       19
//    17-19-21
// 15-17-19-21-23


// ----5
// --3-5
// 1-3-5