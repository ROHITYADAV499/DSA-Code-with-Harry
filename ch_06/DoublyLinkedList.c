#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

void Traversal(struct Node *head){
    struct Node *ptr=head;
    struct Node *p=ptr->next;
    printf("\nElements traversed in forward direction:\n");
    printf("%d\n",ptr->data);
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
        ptr=ptr->next;
    }
    printf("\nElements traversed in reverse direction:\n");
    
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->prev;
    }
    // ptr=head;
    // printf("%d",ptr->data);
}

int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=12;
    head->prev=NULL;
    head->next=second;

    second->data=23;
    second->prev=head;
    second->next=third;
    
    third->data=14;
    third->prev=second;
    third->next=fourth;

    fourth->data=28;
    fourth->prev=third;
    fourth->next=NULL;
    
    Traversal(head);
    return 0;
}