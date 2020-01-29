#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float price , cost;
    int extra = 0 , fixed = 5 , base = 2;
    char input_size[10] ,input_pep[10], input_cheese[10] ,input_mush[10];
    int size , pep , cheese , mush;
    float area;


    printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\nEnter pizza size (1=s, 2=m, or 3=l): ");
    fgets(input_size , 10 , stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(input_pep , 10 , stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(input_cheese , 10 , stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(input_mush , 10 , stdin);


    size = atoi(input_size);
    pep = atoi(input_pep);
    cheese = atoi(input_cheese);
    mush = atoi(input_mush);

    if (size == 1)
    {
        area = M_PI * (10*10)/4;
    }
    else if (size == 2)
    {
        area = M_PI * (16*16)/4;
    }
    else if (size == 3)
    {
        area = M_PI * (20*20)/4;
    }
    
    if (pep == 1){
        extra = extra + 0.5;
    }
    if (cheese == 1)
        {
            extra += 0.25;
        }
    if (mush == 1)
        {
            extra += 0.30;
        }
    
    printf("%d",pep);
    cost = fixed + (base*area) + (extra*area);
    price = 1.5 * cost;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\nYour order costs %.2f baht.\nThank you." , price);
    


}