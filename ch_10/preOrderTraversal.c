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

void preOrderTraversal(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

int main(){


    //Constructing the node using Function
    struct node *p1=createTree(4);
    struct node *p2=createTree(1);
    struct node *p3=createTree(6);
    struct node *p4=createTree(5);
    struct node *p5=createTree(2);

    
    //Linking Left and right Node of the Parent Node
    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;
    
    preOrderTraversal(p1);
    return 0;
}