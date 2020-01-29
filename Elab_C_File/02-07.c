#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x_str[5], y_str[5];

    printf("Enter the x coordinate: ");
    fgets(x_str, 5, stdin);
    printf("Enter the y coordinate: ");
    fgets(y_str, 5, stdin);

    int x = atoi(x_str);
    int y = atoi(y_str);


    if (x == 0 & y == 0){
        //CENTER
        printf("Center");
    }
    else if(x == 0 & y > 0){
        //NORTH
        printf("North");
    }
    else if(x == 0 & y < 0){
        //SOUTH
        printf("South");
    }
    else if(x > 0 & y == 0){
        //EAST
        printf("East");
    }
    else if (x < 0 & y == 0){
        //WEST
        printf("West");
    }
    else if (x >= 0 & y >= 0 ){
        // Q1
        printf("North-east");
    }
    else if(x < 0 & y > 0){
        // Q2
        printf("North-west");
    }
    else if(x < 0 & y < 0){
        // Q3
        printf("South-west");
    }
    else if(x > 0 & y < 0){
        //Q4
        printf("South-east");
    }
    /*
    North-east Q1
    North-west Q2

    South-east Q4
    South-west Q3





    */
    return 0;
}