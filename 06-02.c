#include <stdlib.h>
#include <stdio.h>
int main(){
    int n_subject, current_credit = 0;
    float allCredit = 0, allGrade = 0;
    printf("Enter number of subject(s): ");
    scanf("%d", &n_subject);
    getchar();
    char credit_grade[100];
    for(int i = 1; i <= n_subject; i++){
        printf("Enter credit,grade for subject #%d: ",i);
        fgets(credit_grade,100,stdin);
        current_credit = atoi(credit_grade);
        if (credit_grade[2]== 'a' ||credit_grade[2]== 'A' ){
            allGrade += 4*current_credit;
        }
        if (credit_grade[2]== 'b' ||credit_grade[2]== 'B' ){
            allGrade += 3*current_credit;
        }
        if (credit_grade[2]== 'c' ||credit_grade[2]== 'C' ){
            allGrade += 2*current_credit;
        }
        if (credit_grade[2]== 'd' ||credit_grade[2]== 'D' ){
            allGrade += 1*current_credit;
        }
        if (credit_grade[2]== 'f' ||credit_grade[2]== 'F' ){
            allGrade += 0*current_credit;
        }
        allCredit += current_credit;
    }
    float sum = allGrade/allCredit;
    printf("GPA = %.2f",sum);
    
}