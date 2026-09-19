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

    LinkedListTraversal(head);
    return 0;
}
