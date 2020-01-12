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
            int code1 = 96;
            for (int j = 1; j <= ((4*num-2)); j++){
                if (j >= (2*num-1)){
                    printf("%c",code1);
                    code1++;
                }
                else if (j < (2*num-1)){
                    printf("%c",code);
                    code--;
                }
                if(j != 1 || j != 4*num-2){
                    printf("-");
                }
                //printf("j is %d\n",j);
                
            }
            printf("\n");

        }
    }
}
//------------------j------------------ 19 37 2*num-1 4*num-3
//j-i-h-g-f-e-d-c-b-a-`-_-^-]-\-[-Z-Y-X-