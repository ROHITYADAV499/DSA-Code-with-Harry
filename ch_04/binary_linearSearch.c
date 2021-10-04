#include<stdio.h>

int binary_search(int a[],int size,int element){
    int mid=0;
    int lower=0;
    int higher=size-1;

    while(lower<=higher){
        mid=(lower+higher)/2;
        if (a[mid]==element)
        return mid;
        if (a[mid]<element){
            lower=mid+1;
        }  
        if (a[mid]>element){
            higher=mid-1;
        }
    }
    return -1;
}

int main(){
    int a[]={1,2,33,44,47,55,75,100};
    int size=sizeof(a)/sizeof(int);
    int element;
    printf("pl.ente the element to be searched: \n");
    scanf("%d",&element);
    int index=binary_search(a,size,element);
    printf("The element %d is at index %d ",element,index);
    return 0;
}