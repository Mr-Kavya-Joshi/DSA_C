#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
}; 

void LinkedListTraversal(struct Node *head){
    
    struct Node *ptr = head;
    do{
        printf("%d",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);  
}

struct Node *insertAtFirst(struct Node *head, int data){
    
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node *p = head;
    //now bringing ptr to last node
    while(p->next!=head){
        p=p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return ptr;
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

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;
    
    //The insert at first function will make a new head so, now declare the value of head = the output of insertAtFirst
    head = insertAtFirst(head, 20);
    LinkedListTraversal(head);
    
    return 0;
}
