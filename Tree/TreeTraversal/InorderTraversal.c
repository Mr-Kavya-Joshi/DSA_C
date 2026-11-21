#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

void inOrderTraversal(struct node * root){
    if(root!=NULL){
        inOrderTraversal(root->left);
        printf("%d",root->data);
        inOrderTraversal(root->right);
        
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
    struct node *p = createNode(1);
    struct node *pl = createNode(2);
    struct node *pr = createNode(3);
    struct node *pll = createNode(4);
    struct node *plr = createNode(5);

    p->left = pl;
    p->right = pr;
    pl->left = pll;
    pl->right = plr;

    printf("inOrder traversal is \n");
    inOrderTraversal(p);
    return 0;
}
