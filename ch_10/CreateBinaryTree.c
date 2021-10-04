#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;//left child node of the parent node
    struct node *right;//right child node of the parent node
};

struct node * createTree(int data){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

int main(){
/*
    // Constructing the root node
    struct node *p;
    p = (struct node *) malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node
    struct node *p1;
    p1 = (struct node *) malloc(sizeof(struct node));
    p->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node
    struct node *p2;
    p2 = (struct node *) malloc(sizeof(struct node));
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;
    */

    //Constructing the node using Function
    struct node *p1=createTree(2);
    struct node *p2=createTree(1);
    struct node *p3=createTree(4);
    //Linking Left and right Node of the Parent Node
    p1->left=p2;
    p1->right=p3;

    return 0;
}