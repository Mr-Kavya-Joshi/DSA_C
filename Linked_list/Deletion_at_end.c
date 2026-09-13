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

struct Node * deleteAtLast (struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
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

    head = deleteAtLast(head);
    printf("Linked list after last element deletion \n");
    LLTraversal(head);
        
    return 0;
}
