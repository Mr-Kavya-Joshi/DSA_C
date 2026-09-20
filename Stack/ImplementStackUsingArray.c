// This code contains (implemented using array)
//1. checking whether stack is empty/full
//2. Pushing and Popping elements
//3. Returning top element
//4. Printing the stack 

#include <stdio.h>
#include <stdlib.h> //bcoz we will use malloc
struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    return 0; //note that this syntax works the same as if else syntax
}
void pushElement(struct stack *s, int val){
    if(isFull(s)){
        printf("Stack overflow");
    }
    else{
        printf("Performing push\n");
        s->top++;
        s->arr[s->top]=val;
    }
}

int popElement(struct stack *s, int val){
    if(isEmpty(s)){
        printf("Stack underflow");
    }
    else{
        printf("Performing pop\n");
        //store the top value and then return it
        val=s->arr[s->top];
        s->top--;
        return val;
    }
}

int main() {
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->size = 80;
    s->arr = (int *)malloc(s->size*sizeof(int));
    s->top = -1; //denotes that the stack is empty right now
//Checking if Empty
    if(isEmpty(s)){
        printf("Note - Your stack is empty.\n");
    }
    else{
        printf ("Note - Your stack is not empty.\n");
    }
    pushElement(s,20);
    pushElement(s,30);
    pushElement(s,40);
    pushElement(s,50);
    pushElement(s,60);
    popElement(s,60);
    
    printf("Now, the top element is %d",s->arr[s->top]);

    printf("\nFinally, the stack is : \n");
    for(int i=0;i<=s->top;i++){
        printf("%d ",s->arr[i]);
    }
    return 0;
}
