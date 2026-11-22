//searching in BST
/*
Concept:
This follows the binary search pattern with a recursive leap of faith
i.e. searching the left and right parts of the tree recursively
*/
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node * search(struct node * root ,int key){
    if(root==NULL) return NULL;
    if(root->data == key){
        return root;
    }
    else if(root->data > key){
        return search(root->left,key);
    }
    else if(root->data < key){
        return search(root->right,key);
    }
}

// creating a new node
struct node* createNode(int data) {
    struct node *n = (struct node *) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main() {
    struct node *p = createNode(40);
    struct node *pl = createNode(20);
    struct node *pr = createNode(50);
    struct node *pll = createNode(10);
    struct node *plr = createNode(21);

    p->left = pl;
    p->right = pr;
    pl->left = pll;
    pl->right = plr;

    printf("Enter the node you want to search : ");
    int key;
    scanf("%d", &key);
    struct node * n = search(p,key);
    if(n!=NULL) printf("Found the node with data %d",n->data);
    else printf("not found.");
    return 0;
}
