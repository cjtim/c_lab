#include <stdio.h>
#include <stdlib.h>
int main(){
    char star_char[10],money_char[10];
    fgets(star_char,10,stdin); // รับ
    int star = atoi(star_char);
    
    fgets(money_char,10,stdin);
    float money = atof(money_char);
    float summ;
    if(star == 1){
        //10%
        float sum = money * (0.1);
    }
    else if(star == 2){
        float sum = money * (0.15);
        //20%
    }
    else if (star < 6){
        float sum = money * (0.2);
        //30%
    }
    else if (star < 9 ){
        float sum = money * (0.3);
        //40%
    }
    else if (star >=9  ){
        float sum = money * (0.4);
    }
    printf("%f",summ);
}