#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}; 

void LinkedListTraversal1(struct Node *head){
    
    struct Node *ptr = head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=NULL);  
}

void LinkedListTraversal2(struct Node *head){
    struct Node * p = head;
    while (p->next!=NULL){ //Bringing pointer to last node
        p=p->next;
    }
    while(p->prev!=NULL){
        printf("%d\n",p->data);
        p=p->prev;
    }
    printf("%d",head->data);
      
}

int main() {

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    (*head).data = 1;
    (*second).data = 3;
    (*third).data = 4;
    (*fourth).data = 6;

    fourth->prev = third;
    third->prev = second;
    second->prev = head;
    head->prev = NULL;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    
    LinkedListTraversal1(head);
    LinkedListTraversal2(head);
    
    return 0;
}
