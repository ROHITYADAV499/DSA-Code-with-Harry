#include<stdio.h>

void printArray(int *A,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
}

void sort(int *A,int n){
    int temp;
    int isSorted;
    printf("\nArray after sorting is: \n");
    for(int i=0;i<n-1;i++){
        isSorted=1;
        printf("Working on pass number %d\n",i+1);
        for (int j = 0; j < n-1-i; j++)//sorting for each pass
        if (A[j]>A[j+1]){
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            isSorted=0;
        }
        if(isSorted){
            return;
        }
        
    }
}

int main(){
    int A[]={0,1,2,3,8,6};
    // int n=sizeof(A)/sizeof(int);
    int n=6;
    printArray(A,n);//Before Sorting
    sort(A,n);
    printArray(A,n);//After Sorting
    return 0;
}