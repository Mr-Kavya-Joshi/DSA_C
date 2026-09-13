#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void LLTraversal(struct Node *ptr){
    int count = 1;
    while (ptr!=NULL){
        printf("Element %d : %d\n",count, ptr->data);
        count++;
        ptr = ptr->next;
    }
}

//CASE 1 - DELETING THE FIRST ELEMENT
struct Node * deleteFirst (struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    LLTraversal(head);
    printf("Linked List after deletion of first element \n");
    head = deleteFirst(head);
    LLTraversal(head);    
    return 0;
}
