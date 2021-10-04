#include<stdio.h>

void printArray(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void insertionSort(int *A,int n){
    int temp,key;
    for(int i=1;i<=n-1;i++){
        key=A[i];
        int j=i-1;
        while(j>0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}



int main(){
    int A[]={0,8,7,5,7,6};
    int n=6;
    
    printArray(A,n);
    insertionSort(A,n);
    printArray(A,n);

    return 0;
}