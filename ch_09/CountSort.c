#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
void printArray(int *A,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

int maximum(int *A,int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
}

void countSort(int *A,int n){
    int i,j;
    int max=maximum(A,n);
    int *count=(int *)malloc((max+1));
    //Initialize the count Array
    for(i=0;i<=max;i++){
        count[i]=0;
    }
    // Increment the corresponding index in the count array
    for(i=0;i<n;i++){
        count[A[i]]=count[A[i]]+1;
    }

    i=0;//counter for count Array
    j=0;//counter for sorted Array
    while(i<=max){
        if(count[i]>0){
            A[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else{
            i++;
        }
    }
}

int main(){
    int A[]={0,3,4,5,1,7};
    int n=6;
    printArray(A,n);
    countSort(A,n);
    printArray(A,n);
return 0;
}