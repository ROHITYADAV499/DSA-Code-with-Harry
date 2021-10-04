#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};

void Traversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Elements:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node *insertAtBeginning(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    
    ptr->data=data;
    ptr->next=head;
    return ptr;

}

struct Node *insertAtIndex(struct Node *head,int data,int index){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;
    while(i != index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node *insertAfterNode(struct Node *head,int data,struct Node *prev_node){
    struct Node *p=(struct Node *)malloc(sizeof(struct Node));
    p->data=data;
    p->next=prev_node->next;

    prev_node->next=p;
    return head;
}


int main(){
struct Node *head=(struct Node *)malloc(sizeof(struct Node));
struct Node *second=(struct Node *)malloc(sizeof(struct Node));
struct Node *third=(struct Node *)malloc(sizeof(struct Node));
struct Node *fourth=(struct Node *)malloc(sizeof(struct Node));
//head node
head->data=11;
head->next=second;
//second node
second->data=23;
second->next=third;
//third node
third->data=44;
third->next=fourth;
//fourth node
fourth->data=52;
fourth->next=NULL;
 
Traversal(head);
 
head=insertAtBeginning(head,27);
printf("\nList After insertion at beginning\n");
Traversal(head);
head=insertAtIndex(head,35,3);
printf("\nList After insertion at index\n");
Traversal(head);
head=insertAfterNode(head,45,third);
printf("\nList After insertion after node\n");
Traversal(head);
 
return 0;
}