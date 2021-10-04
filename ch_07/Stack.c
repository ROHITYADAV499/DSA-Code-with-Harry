#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};



int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr,int value){
    if (isFull(ptr)){
        printf("Stack is Full\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack is Empty");
    }
    else{
        int value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Pushing an element manually
    // s->arr[0] = 7;
    // s->top++;

    // Check if stack is empty
    
    // if(isEmpty(s)){
    //     printf("The stack is empty\n");
        
    // }
    // else{
    //     printf("The stack is not empty\n");
        
    // }
    // if(isFull(s)){
    //     printf("The stack is Full\n");
        
    // }
    // else{
    //     printf("The Stack is not Full\n");
    // }
    // return 0;
    push(s,54);
    push(s,45);
    push(s,100);
    push(s,690);
    push(s,7000);
    printf("Popped %d from the stack\n", pop(s));
    printf("Popped %d from the stack\n", pop(s));
    printf("Popped %d from the stack\n", pop(s));
    return 0;
}