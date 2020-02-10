// 6210402364 Jinna Chodchoy 
#include <stdio.h> 
#include <stdlib.h>
struct node { 
   int data; 
   struct node *next; 
};
void insert_to_list(struct node **head, struct node **tail, int input[], int n)
{  int i;
   for (i=0; i < n; i++) {
    if (*head == NULL){
        *head = *tail = (struct node *)malloc(sizeof(struct node));
    }
    else {
        (*tail)->next = (struct node *)malloc(sizeof(struct node));
        *tail = (*tail)->next;
    }
    (*tail)->data = input[i];
    (*tail)->next = NULL;
   }
}
/* function to swap data of two nodes a and b*/
void swap(struct node *a, struct node *b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
} 
void Sort(struct node *head, int n) 
{ 
    // PRE_NODE | NODE 
    int i = 0, pass = 1;
    struct node *NODE = head; 
    struct node *LAST_NODE = NULL; 
    /* Checking for empty list */
    if (head == NULL) 
        return; 
    // NODE = head;
    while (pass < n){
        NODE = head;
        while(NODE->next != LAST_NODE){
            if (NODE->data > (NODE->next)->data){
                swap(NODE , NODE->next);
            }
            NODE = NODE->next;
        }
        pass++;

    }
} 
void print_list(struct node *head)
{
   for (; head; head = head->next)
      printf("%d ", head->data);
   putchar('\n');
}
int main(){
    int num, list_num[100] = {0}, n_num = 0;
    for (int i = 0; num != -1; i++){
        scanf(" %d",&num);
        if (num != -1){
            list_num[i] = num;
            n_num++;
        }
    }
    struct node *head=NULL, *tail=NULL, *tmp;
    insert_to_list(&head, &tail, list_num, n_num);
    Sort(head, n_num);
    print_list(head);
}