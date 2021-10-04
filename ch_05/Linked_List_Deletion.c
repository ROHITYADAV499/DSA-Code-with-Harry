#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;

    }
}

struct Node *deletionAtFirst(struct Node *head){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    
    ptr->next=head->next;
    head=ptr->next;
    free(ptr);
    return head;
}

struct Node *deletionAtIndex(struct Node *head,int index){
    struct Node *ptr=head;
    struct Node *p=head->next;

    int i=0;
    while(i!=index-2){
        ptr=ptr->next;
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    free(p);
    return head;
}

struct Node *deletionAtEnd(struct Node *head){
    struct Node *ptr=head;
    struct Node *p=head->next;
    while(p->next!=NULL){
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=NULL;
    free(p);
    
    return head;
}

struct Node * deleteAtValue(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}
int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth=(struct Node *)malloc(sizeof(struct Node));

    head->data=11;
    head->next=second;

    second->data=12;
    second->next=third;

    third->data=9;
    third->next=fourth;

    fourth->data=92;
    fourth->next=fifth;

    fifth->data=100;
    fifth->next=NULL;

    traverse(head);
    // head=deletionAtFirst(head);
    // printf("\nList after Deletion\n");
    // traverse(head);
    // printf("\nList after deletion at index\n");
    // head=deletionAtIndex(head,3);
    // head=deletionAtEnd(head);
    // printf("\nList after deletion at end\n");
    // traverse(head);
    head=deleteAtValue(head,9);
    printf("\nList After Deletion of Value:\n");
    traverse(head);
    
return 0;
}