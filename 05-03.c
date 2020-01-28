#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Initial Value: ");
    double n, sum = 0;
    scanf("%lf",&n);
    printf("\n");
    sum = n;
    while(1){
        char operator;
        printf("Operator: ");
        scanf(" %c",&operator);
        if(operator == '+' || operator == '-' || operator == '*' || operator == '/'){
        	int pass = 0;
        }else
        {
        	break;
        }
        printf("Input Value: ");
        double input;
        scanf(" %lf",&input);
        if (operator == '+'){
            sum += input;
        }
        else if(operator == '-'){
            sum -= input;
        }
        else if(operator == '*'){
            sum *= input;
        }
        else if(operator == '/'){
            sum /= input;
        }
        printf("Present Value is %.4lf\n",sum);
        printf("\n");
    }
    printf("\n");
    printf("Finish Calculation. Final Value is %.4lf\n",sum);
}
