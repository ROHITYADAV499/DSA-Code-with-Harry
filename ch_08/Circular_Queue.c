#include<stdio.h>
#include<stdlib.h>
struct Circular_Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

void enqueue(struct Circular_Queue *q,int value){
    if((q->r+1)%q->size==q->f)
        printf("Queue is full\n");
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=value;
        printf("Enqueued element :%d\n",value);
    }

}

int dequeue(struct Circular_Queue *q){
    if(q->r==q->f)
        printf("Queue is Empty");
    else{
        q->f=(q->f+1)%(q->size);
        int val=q->arr[q->f];
        return val;
    }
}

int main(){
struct Circular_Queue q;
q.size=4;
q.f=q.r=0;
q.arr=(int*)malloc(q.size*sizeof(int));
enqueue(&q,45);
enqueue(&q,56);
enqueue(&q,6);
printf("Dequeuing element :%d\n", dequeue(&q));
printf("Dequeuing element :%d\n", dequeue(&q));
printf("Dequeuing element :%d\n", dequeue(&q));
if((q.r+1)%q.size==q.f)
    printf("Queue is full\n");
if(q.r==q.f)
    printf("Queue is Empty");

return 0;
}