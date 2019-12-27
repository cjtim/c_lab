#include <stdio.h>
#include <stdlib.h>
char name[20];
char number[5];
int main(){
    // printf("Enter name : ");
    // gets(name); //get string
    // fgets(name , 20 , stdin); //file get source ยืดหยุ่นกว่า gets (name,ขนาดbuffer,standart input)
    // getchar(chr);
    //fgets(number,5,stdin);
    //int i = atoi(number); // Array to integer
    //printf("%s",name);
    //printf("number = %s , i = %d",number , i); //เราต้องกำหนดarrayไว้เผื่อ \0
    // fgets(number,5,stdin);
    // int i = atoi(number);
    // puts(number);
    // putchar(100);
    // putchar('u');

    //BOOLEAN
    // int found = 0;
    // float isExist = 0.0;
    // char isOnline = '\0'; //  \0 is False , else is True

    // fgets(number, 5, stdin);
    // int i = atoi(number);

    // if(i > 0 && i <= 10){
    //     printf("if = %d\n" , i > 0 && i <= 10 );
    // }else if (i <= 20 || !found){
    //     printf("else if\n");
    // }else{
    //     printf("else\n");
    // }

    // fgets(number, 5, stdin);
    int i = atoi(number);
    // int count = 0;
    // while (count < i ){
    //     count++ * count - 5;
    //    // ++count * count - 5; //++count เร็วกว่า
    //    printf("count = %d\n", count);
    //}
    for (int j = 0; j < i; j++){
        printf("j = %d\n", j);
    }
    while (1){ //while True

    }
}