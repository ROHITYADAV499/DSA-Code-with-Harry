#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueueR(int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}

int enqueueF(int val){
    struct Node *n=(struct Node*) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data=val;
        n->next=NULL;
        if(r==NULL){
            f=r=n;
        }
        else{
            f->next=n;
            f=n;
        }
    }
}

int dequeueF()
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
int dequeueR()
{
    int val = -1;
    struct Node *ptr = r;
    if(r==NULL){
        printf("Queue is Empty\n");
    }
    else{
        r = r->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main(){
    enqueueR(36);
    enqueueR(35);
    enqueueR(34);
    printf("Element Dequeued: %d\n",dequeueF());
    printf("Element Dequeued: %d\n",dequeueF());
    printf("Element Dequeued: %d\n",dequeueF());
    f=NULL;
    r=NULL;
    printf("\n");
    enqueueF(36);
    enqueueF(35);
    enqueueF(34);
    printf("Element Dequeued: %d\n",dequeueR());
    printf("Element Dequeued: %d\n",dequeueR());
    printf("Element Dequeued: %d\n",dequeueR());
}