#include <stdio.h>
#include <stdlib.h>
int main(){
    char star_char[10],money_char[10];
    fgets(star_char,10,stdin); // รับ
    int star = atoi(star_char);
    
    fgets(money_char,10,stdin);
    float money = atof(money_char);
    float summ;
    int starleft;
    if(star == 1){
        //10%
        summ = money * (0.9);
        printf("You get 10 percents discount.\n");
        starleft = star - 1;
    }
    else if(star == 2){
        summ = money * (0.85);
        printf("You get 15 percents discount.\n");
        //20%
        starleft = star - 2;
    }
    else if (star < 6){
        summ = money * (0.8);
        printf("You get 20 percents discount.\n");
        //30%
        starleft = star - 3;
    }
    else if (star < 9 ){
        summ = money * (0.7);
        printf("You get 30 percents discount.\n");
        //40%
        starleft = star - 6;
    }
    else if (star >=9  ){
        summ = money * (0.6);
        printf("You get 40 percents discount.\n");
        starleft = star - 9;
    }
    
    // printf("star is %d\n",star);
    // printf("money is %f\n",money);
    printf("Total amount due is %.2f Baht.\n",summ);
    printf("And you have %d stickers left.",starleft);
}