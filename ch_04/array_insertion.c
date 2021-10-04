#include<stdio.h>
#include<stdlib.h>

void input(int a[],int size){
    for(int i=0;i<size;i++){
        printf("pl.enter the no: \n");
        scanf("%d",&a[i]);
        
    }
}

void traversal(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int indinsert(int a[],int size,int e,int index,int capacity){
    if (size>=capacity)
        return -1;
    for(int i=(size-1);i>=index;i--){
        a[i+1]=a[i];
    }
    a[index]=e;
    return 1;
}

int main(){
    int a[100],size=4,element=45,index=2,capacity=100,c=1;
                                                                            
    input(a,size);
    
    traversal(a,size);
    indinsert(a,size,element,index,capacity);
    size += 1;
    traversal(a,size);
    return 0;
}