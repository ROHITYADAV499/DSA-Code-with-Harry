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

int isBST(struct node *root){
    static struct node *prev=NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

void inOrderTraversal(struct node *root){
    if(root!=NULL){
        inOrderTraversal(root->left);
        printf("%d ",root->data);
        inOrderTraversal(root->right);
    }
}
int main(){


    //Constructing the node using Function
    struct node *p1=createTree(5);
    struct node *p2=createTree(3);
    struct node *p3=createTree(6);
    struct node *p4=createTree(1);
    struct node *p5=createTree(4);

    
    //Linking Left and right Node of the Parent Node
    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;
    
    inOrderTraversal(p1);
    printf("\n");
    if(isBST(p1)){
        printf("Tree is a BST");
    }
    else{
        printf("Tree is not a BST");
    }
    return 0;
}