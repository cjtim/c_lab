#include <stdio.h> 
#include <stdlib.h> 
  
typedef struct node { 
   struct node *prev;
   int data; 
   struct node *next; 
} Node; 
  
Node *create_list()
{  Node *first, *second, *third; 
  
   first = (Node *)malloc(sizeof(Node));
   second = (Node *)malloc(sizeof(Node));
   third = (Node *)malloc(sizeof(Node));
  
   first->data = 17; 
   first->prev = third;
   first->next = second;

   second->data = 29; 
   second->prev = first; 
   second->next = third; 
  
   third->data = 93;
   third->prev = second; 
   third->next = first; 
    
   return first;
}

int main() 
{  Node *head, *tmp;

   head = create_list();
   tmp = head;
   while (tmp) {
      printf("%d ", tmp->data);
      tmp = tmp->next;
      if (tmp == head)
         break;
   }
}

