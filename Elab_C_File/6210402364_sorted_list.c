#include <stdio.h> 
#include <stdlib.h>

struct node { 
   int data; 
   struct node *next; 
};

void insert_to_list(struct node **head, int list_num)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));    
    *head = (struct node *)malloc(sizeof(struct node));
    (*head)->next = NULL;
    (*head)->data = list_num;
}
void print_list(struct node *head)
{
   for (; head; head = head->next)
      printf("%d ", head->data);
   putchar('\n');
}

int main(){
    int num, list_num[100] = {0}, i = 0, n_num = 0;
    while (num != -1){
        scanf(" %d",&num);
        if (num != -1){
            list_num[i] = num;
            n_num++;
        }
    }
    struct node *head=NULL, *tail=NULL, *tmp;
    for (int i = 0; i < n_num; i++){
        if(head != NULL){
        }   
        else{
            int data = list_num[i];
            insert_to_list(&head, list_num[i]);
        }     
    }
    printf("printing\n");
    for (int i = 0; i < n_num; i++){
        print_list(head);
    }
}