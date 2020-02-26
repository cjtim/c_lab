#include <stdio.h>
int main(){
    int i, j=12;
    int *pi, *pj=&j;
    *pj = j+3;  //*pj = 15
    i = *pj+7; // i = 22
    pi = pj; // *pi = *pj = 15
    *pi = i+j; // *pi = *pj = j = 37


    printf("*pj is %d\n",*pj);
}