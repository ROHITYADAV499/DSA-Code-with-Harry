#include<stdio.h>
#include<stdlib.h>
struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

void create_array(struct myarray *a,int tsize,int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));

}

void set_val(struct myarray *a){
    int n;
    for(int i=0;i<(a->used_size);i++){
        printf("pl.enter no %d: ",i);
        scanf("%d",&n);
        a->ptr[i]=n;
    }
}
void show(struct myarray *a){
    for(int i=0;i< a->used_size ;i++){
        printf("%d\n", (a->ptr)[i]);
    }
}

int main(){
    struct myarray marks;
    create_array(&marks,10,2);
    set_val(&marks);
    show(&marks);
    return 0;
}