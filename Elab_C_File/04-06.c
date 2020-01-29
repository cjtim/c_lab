#include <stdio.h>
#include <stdlib.h>
int main(){
    char target_str[20],input_str[20];
    printf("Enter your goal amount: ");
    fgets(target_str, 20, stdin);
    float target = atof(target_str);
    float sum;
    int i = 1;
    while (sum < target)
    {
        printf("Enter money collected today: ");
        fgets(input_str, 20,stdin);
        float input = atof(input_str);
        sum += input;
        if (sum < target){
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n",i,sum,target-sum);
        }
        i++;
    }
    if (i-1 == 1){
        printf("Congratulations! You take 1 day to reach your goal.\n");
    }else{
    printf("Congratulations! You take %d days to reach your goal.\n",i-1);
    }
}