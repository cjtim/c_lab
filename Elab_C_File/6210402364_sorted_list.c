// 6210402364 Jinna Chodchoy 
#include <stdio.h> 
#include <stdlib.h>
struct node { 
   int data; 
   struct node *next; 
};
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
    struct node *head=NULL, *tail=NULL, *tmp;
    for (int i = 0; num != -1; i++){
        scanf(" %d",&num);
        if (num != -1){
            list_num[i] = num;
            if (head == NULL){
                head = tail = (struct node *)malloc(sizeof(struct node));
            }
            else {
                tail->next = (struct node *)malloc(sizeof(struct node));
                tail = tail->next;
            }
            (tail)->data = list_num[i]; 
            (tail)->next = NULL;
            n_num++;
            Sort(head, n_num);
            // print_list(head); //for debug
        }
    }
    Sort(head, n_num);
    // print_list(head);    
    for (tmp=head; tmp; tmp = tmp->next)
    printf("%d\n", tmp->data);
}