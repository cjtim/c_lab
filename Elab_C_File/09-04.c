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
            if(strcmp(input , "exit") == 0){break;}
            i = 0;
            int break_loop = 0;
            strcpy(data[0].word, input);
            data[0].count += 1;
            i++;
            last_word++;
            // printf("    last_word is %d\n", last_word);
            
            while(1){
                scanf("%20s", input);
                if(strcmp(input , "exit") == 0){
                    break;
                }
                else{
                    for(int j = 0; j < i; j++){
                        if(strcmp(data[j].word, input) == 0){
                            // printf("    strcmp(data[%d].word, input) = %d\n", j, strcmp(data[j].word, input));
                            data[j].count += 1;
                            break_loop = 1;
                            // printf("    break_loop is %d\n", break_loop);
                            break;
                        }
                    }
                    if(break_loop == 0){
                        strcpy(data[i].word, input);
                        data[i].count += 1;
                        last_word++;
                        i++;
                    }
                }
                // printf("    data[%d].word is %s\n", i, data[i].word);
                // printf("    data[%d].count is %d\n", i, data[i].count);
                break_loop = 0;
            }
            break;
        }

        printf("Output:\n");
        for(i=0;i<last_word;i++){
                printf("%s = %d\n", data[i].word, data[i].count);
                // printf("data[%d].word = %s data[%d].count = %d\n", i, data[i].word, i, data[i].count);
        }
}
