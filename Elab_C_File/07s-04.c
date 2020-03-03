#include <stdio.h>
#include <string.h>

int main(){
    int L, N, count = 0, exit_loop = 0;
    scanf("%d %d", &L, &N);
    char previous[L+1];
    char working[L+1];
    char answer[L+1];
    scanf("%s",previous);
    for(int i = 0; i < N-1; i++){
        if(exit_loop == 1){
            scanf("%s",working);
            continue;
        }
        scanf("%s", working);
        for(int j = 0; j < L; j++){  // Check ตัวซ้ำ
            if(previous[j] == working[j]){
                count++;
            }
        }
        count = L - count;
        // printf("---count is %d\n",count);
        if(count > 2){
            exit_loop = 1;
            strcpy(answer, previous);
            // printf("--------exit loop = 1\n");
            // printf("--------answer is %s\n", answer);
        }

        // printf("resetting count \n");
        count = 0;
        strcpy(previous, working);
        // printf("---previous now is %s\n",previous);
        // printf("i = %d\n", i);
    }
    if(exit_loop == 0){
        strcpy(answer, working);
    }
    printf("%s\n", answer);
}