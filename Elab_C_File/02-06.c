#include <stdio.h>
#include <stdlib.h>
int main(){
    int ascii = getchar();
    if (ascii > 64 & ascii < 91){
        printf("Output: upper case\n");
    }
    else if (ascii > 96 & ascii < 123)
    {
        printf("Output: lower case\n");
    }
    else if (ascii > 47 & ascii < 58){
        printf("Output: digit\n");
    }
    else{
        printf("Output: others\n");
    }
}