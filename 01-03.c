#include<stdio.h>
void main()
{   
    float preGrade = 1.75;
    int preCredit = 21;
    int credit = 18;
    float requiredGrade = 2.00;

    float up = (requiredGrade*(preCredit+credit)) - (preGrade*preCredit);
    float down = credit;
    float x = up/down;
    printf("The GPA this semester should be %.2f",x);

}