#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
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

void push(struct stack *ptr,char value){
    if (isFull(ptr)){
        printf("Stack is Full\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}

char pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack is Empty");
    }
    else{
        char value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int paranthesisMatch(char *exp){
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='('){
            push(s,exp[i]);
        }
        else if(exp[i]==')'){
            if(isEmpty(s)){
                return 0;
            }
            else 
                pop(s);
        
        }
        
    }
    if(isEmpty(s)){
        return 1;
    }
    else
        return 0;

}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    

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
    char *exp="(3*4)(6*2)";
    if(paranthesisMatch(exp)){
        printf("Parenthesis is Perfectly Matched");
    }
    else
        printf("Parenthesis is Not Matched");
    return 0;
}
