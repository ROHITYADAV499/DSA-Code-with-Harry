#include<stdio.h>

void printArray(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void merge(int A[],int low,int mid,int high){
    int B[100];
    int k=low;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        B[k]=A[i];
        i++;
        k++;
    }
    while(j<=high){
        B[k]=A[j];
        j++;
        k++;
    }

    for(i=low;i<=high;i++){
        A[i]=B[i];
    }
}

void mergeSort(int A[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSort(A,mid+1,high);//for creating the first half of the array
        mergeSort(A,low,mid);//for creating second half of the array
        merge(A,low,mid,high);
    }
}

int main(){
    int A[]={0,3,5,4,66,8,2,7,9};
    int low=0,high=8;
    int n=9;
    printArray(A,n);
    mergeSort(A,low,high);
    printArray(A,n);

return 0;
}