#include<stdio.h>
#include<string.h>

struct Word {
    char word[21];
    int count;

};

int main(){
        char input[21];
        int i, last_word = 0, find = 0;
        struct Word data[20] = {0};
        scanf("%20s", input);

        while(1){
            strcpy(input, data[0].word);i++;
            for(int j = 0; data[i].word != 0; j++){
                if
            }
            while(1){
                scanf("%20s", data[i]);
                i++;
            }
            
                

        }

        printf("Output:\n");
        for(i=0;i<last_word;i++){
                printf("%s = %d\n", data[i].word, data[i].count);
        }
}
