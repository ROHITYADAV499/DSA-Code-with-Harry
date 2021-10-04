#include<stdio.h>

void printArray(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int partition(int *A,int low,int high){
    int pivot =A[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i<j){
            temp=A[j];
            A[j]=A[i];
            A[i]=temp;
        }
    }while(i<j);
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
}

void quickSort(int *A,int low,int high){
    int partitionIndex;
    if(low<high){
        partitionIndex=partition(A,low,high);
        quickSort(A,partitionIndex+1,high);//right side of partition
        quickSort(A,low,partitionIndex-1);//left side of partition
    }
}

int main(){
    int A[]={1,2,22,4,55,6,88,9,77,88,99};
    int n=11;
    printArray(A,n);
    quickSort(A,0,n-1);
    printArray(A,n);
return 0;
}