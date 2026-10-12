//Array representation of binary tree
/*
            A
        B       C
      D   E    F  G
*/
//from here we can say that right child is 2i+1 and left child is 2i
// as array index starts from 0, left is 2j+1 and right 2j+2
#include <stdio.h>
char tree[10]; //global declaration
void addleft(char ch, int j){
    if(tree[j]!=0){
        tree[2*j+1]=ch;
    }
    else{
        printf("Parent not found at index %d",j);
    }
}

void addright(char ch, int j){
    if(tree[j]!=0){
        tree[2*j+2]=ch;
    }
    else{
        printf("Parent not found at index %d",j);
    }
}

void print(){
    for(int i = 0; i<10 ; i++){
        if(tree[i]!='\0'){
            printf("%c\t",tree[i]);
        }
        else printf("_\t");
    }
}

int main() {
    tree[0] = 'A';
    addleft('B', 0);
    addright('C',0);
    addleft('D', 1);
    addright('E',1);
    addright('G',2);
    print();
    return 0;
}
