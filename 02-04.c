#include <stdio.h>
#include <stdlib.h>
int main(){
    char salary_str[20];
    gets(salary_str);
    float salary = atof(salary_str);
    float tax , taxmorethan300k, taxmorethan500k, sum;
    if (salary < 300000 & salary >= 0){
        tax = salary * 0.05;
        sum = tax;
        printf("%.2f" ,sum);
    }
    else if (salary >= 300000 & salary < 500000){
        tax = 300000 * 0.05;
        taxmorethan300k = (salary - 300000) * 0.1;
        sum = tax + taxmorethan300k;
        printf("%.2f" ,sum);
    }
    else if (salary >= 500000){
        tax = 300000 * 0.05;
        taxmorethan300k = 200000 * 0.1;
        sum = tax + taxmorethan300k;
        printf("%.2f" ,sum);
    }
    else{
        printf("Error: Salary must be greater or equal to 0");
    }
    

}