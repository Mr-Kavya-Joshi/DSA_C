#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

void postOrderTraversal(struct node * root){
    if(root!=NULL){
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d",root->data);
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

    printf("postOrder traversal is \n");
    postOrderTraversal(p);
    return 0;
}
