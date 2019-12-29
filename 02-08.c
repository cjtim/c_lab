#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char size_str[2] , peperroni_str[2] , cheese_str[2] , mushroom_str[2];
    int dia;
    float price, cost, fixedcost, basecost, extracost;
    double area;
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    gets(size_str);
    int size = atoi(size_str);
    if (size == 1){
        dia = 10;
    }
    else if(size == 2){
        dia = 16;
    }
    else if(size == 3){
        dia = 20;
    }

    printf("Extra pepperoni? (1=yes, 0=no): ");
    gets(peperroni_str);
    int pepperoni = atoi(peperroni_str);
    if (pepperoni == 0){
        extracost += 0;
    }
    else if (pepperoni == 1){
        extracost += 0.5;
    }

    printf("Extra cheese? (1=yes, 0=no): ");
    gets(cheese_str);
    int cheese  = atoi(cheese_str);
    if (cheese == 0){
        extracost += 0;
    }
    else if (cheese == 1){
        extracost += 0.25;
    }

    printf("Extra mushroom? (1=yes, 0=no): ");
    gets(mushroom_str);
    int mushroom = atoi(mushroom_str);
    if(mushroom == 0){
        extracost += 0;
    }
    else if(mushroom){
        extracost += 0.3;
    }
    
    
    area = (M_PI * dia * dia)/ 4 ;

    fixedcost = 5;
    basecost = 2;
    cost = fixedcost + (basecost * area) + (extracost * area);
    price = cost * 1.5;






    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    //printf("s = %s \npeper = %d\ncheese = %d\nmush = %d\n",size_str,pepperoni,cheese,mushroom);
    printf("Your order costs %.2f baht.\n",price);
    printf("Thank you.\n");
    
}