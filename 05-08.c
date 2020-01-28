#include <stdio.h>
#include <stdlib.h>
int main(){
  char front[] = {'|','-'};
  char back[] = {'-','|'};

  int n;
  printf("Input number of stairs: ");
  scanf("%d",&n);

  int head = n-1, feet = n, round = 1,stepN=n;
//   printf("%d %d\n",head ,feet);
  while(1){
    printf("---- round %d ----\n",round++);
    for (int i = 1; i <= n ; i++){
      printf("%c%c",front[0],front[1]);
      if(i != head && i != feet){
        printf("-");
      }
      else if(i == head){
        printf("O");
      }
      else if(i == feet){
        printf("^");
      }
      printf("%c%c\n",back[0],back[1]);
    }
    // printf("head is %d\nfeet is %d\n",head,feet);
    int step;
    printf("Input step command: ");
    scanf("%d",&step);
    if (step == 0){
        break;
    }
    // step = abs(step-stepN);
    // printf("step is %d\n",step);
    
    head -= step;
    feet -= step;
    if (head < 1  ){
      head = 1;
      feet = 2;
    }
    else if( feet >= n+1){
      head = n-1;
      feet = n;
    }
  }


}