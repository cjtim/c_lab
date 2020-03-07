#include <stdio.h>
#include <stdlib.h>

typedef struct Node { 
   int data; 
   struct node *next; 
}node;


void printList(node *pList) {
  while(pList->next != NULL){
    printf("%d\n", pList->data);
    pList = pList->next;
  }
}

void insertNode(node *pList,int num) {

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