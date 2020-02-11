#include <stdio.h>

int main() {
    char str[100];
    printf("String (without a space): ");
    fgets(str, 100, stdin);
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'|| str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'|| str[i] == 'U'){
            printf("%c ", str[i]);
            count++;
        }
    }
    puts("");
    if(count >= 2){
        printf("This string contains %d vowels.\n",count);
    }
    else{
        printf("This string contains %d vowel.\n",count);
    }
    
    
}    