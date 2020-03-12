#include <stdio.h>
#include <stdlib.h>

typedef struct Node { 
   int data; 
   struct node *next; 
}node;


void insertNode(node **head, int input[], int n)
{  int i;
   for (i=0; i < n; i++) {
    if (*head == NULL){
        *head = (node *)malloc(sizeof(node));
    }
    else {
        (*head)->next = (node *)malloc(sizeof(node));
        *head = (*head)->next;
    }
    (*head)->next = NULL;
   }
}
/* function to swap data of two nodes a and b*/
void swap(struct node *a, struct node *b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
} 
/* Bubble sort the given linked list */
void bubbleSort(struct node *head) 
{ 
    // PRE_NODE | NODE 
    int swapped, i; 
    struct node *NODE; 
    struct node *LAST_NODE = NULL; 
    /* Checking for empty list */
    if (head == NULL) 
        return; 
    do
    { 
        swapped = 0; 
        NODE = head; 
        while (NODE->next != LAST_NODE) 
        { 
            if (NODE->data > (NODE->next)->data) 
            {  
                swap(NODE, NODE->next); 
                swapped = 1; 
            } 
            NODE = NODE->next; 
        } 
        LAST_NODE = NODE; 
    }
    while (swapped);
}

void printList(node *pList) {
    while(pList->next != NULL){
        printf("%d");
        pList = pList->next;
    }
    putchar('\n');
}
int main() {
  int i, value;
  node *pList=NULL;

  for (i = 0; i < 10; i++) {
    scanf(" %d", &value);
    insertNode()
  }

  printList(pList);
}