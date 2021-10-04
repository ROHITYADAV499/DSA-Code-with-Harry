#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *top){
    while(top!=NULL){
        printf("Elements: %d\n",top->data);
        top=top->next;
    }
}

int isEmpty(struct Node *top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Node *top){
    struct Node *p=(struct Node *)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct Node *push(struct Node *top,int n){
    if(isFull(top)){
        printf("Stack is Overloaded\n");
    }
    else{
        struct Node *p=(struct Node *)malloc(sizeof(struct Node));
        p->data=n;
        p->next=top;
        top=p;
        return top;
    }
}
int pop(struct Node **top){
    if(isEmpty(*top)){
        printf("Stack is Empty\n");
    }
    else{
        struct Node *p=*top;
        *top=(*top)->next;
        int value=p->data;
        
        free(p);

        return value;
    }
}

int main(){
    struct Node *top=NULL;
    top=push(top,78);
    top=push(top,54);
    top=push(top,75);
    printf("\nElements are:\n");
    Traversal(top);
    int val=pop(&top);
    printf("\n");
    Traversal(top);
    return 0;
}